class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cs=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            int op1=cs+nums[i];
            int op2=nums[i];
            cs=max(op1,op2);
        
        ans=max(ans,cs);
        }
        return ans;
    }
};