class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int p=-1;
        sort(nums.begin(),nums.end());
        int m=nums.size();
        int i=0;
        while(m>0){
            if(i!=nums[i]){
                p=i;
                break;
            }
            m--;
            i++;
        }
        if (p == -1) p = nums.size();
        return p;
    }
};