class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>nn;
        vector<int>pp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                pp.push_back(nums[i]);
            }else if(nums[i]<0){
                nn.push_back(nums[i]);
            }
        }
        vector<int>f;
        for(int i=0;i<pp.size();i++){
            f.push_back(pp[i]);
            f.push_back(nn[i]);
        }
        return f;
    }
};