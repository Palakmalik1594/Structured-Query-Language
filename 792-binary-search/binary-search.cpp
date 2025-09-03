class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0;
        int n=nums.size();
        int j=n-1;
        int mid=(i+j)/2;
        while(i<=j){
            int mid=(i+j)/2;
            if(nums[mid]==target){
                return mid;
            }else if(target>nums[mid]){
                i=mid+1;
            }else{
                j=mid-1;
            }
        }
        return -1;
    }
};