class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i=0;
        int n=nums.size();
        int j=nums.size()-1;
        int ii=-1;
        int jj=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                ii=i;
                break;
            }
        }
        for(int j=n-1;j>=0;j--){
            if(nums[j]==target){
                jj=j;
                break;
            }
        }
        return {ii,jj};
    }
};