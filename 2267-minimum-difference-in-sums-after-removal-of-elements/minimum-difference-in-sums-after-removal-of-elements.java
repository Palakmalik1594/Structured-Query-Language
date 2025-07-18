import java.util.*;
class Solution {
    public long minimumDifference(int[] nums) {
        int n3 = nums.length;
        int n = n3 / 3;
        long[] lm = new long[n3];
        long[] rm = new long[n3];
        PriorityQueue<Integer> maxHeap = new PriorityQueue<>(Collections.reverseOrder());
        long leftSum = 0;
        for (int i = 0; i < n3; ++i) {
            maxHeap.offer(nums[i]);
            leftSum += nums[i];
            if (maxHeap.size() > n) {
                leftSum -= maxHeap.poll();
            }
            if (i >= n - 1) {
                lm[i] = leftSum;
            }
        }
        PriorityQueue<Integer> minHeap = new PriorityQueue<>();
        long rightSum = 0;
        for (int i = n3 - 1; i >= 0; --i) {
            minHeap.offer(nums[i]);
            rightSum += nums[i];
            if (minHeap.size() > n) {
                rightSum -= minHeap.poll();
            }
            if (i <= n3 - n) {
                rm[i] = rightSum;
            }
        }
        long result = Long.MAX_VALUE;
        for (int i = n - 1; i <= n3 - n - 1; ++i) {
            result = Math.min(result, lm[i] - rm[i + 1]);
        }

        return result;
    }
}