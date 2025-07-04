class Solution {
public:
    int trap(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int ans = 0;
        int left = 0,right = 0;
        while(i<j){
            if(height[i]<height[j]){
                if(left>height[i]){
                    ans+=left-height[i];
                }
                else{
                    left = height[i];
                }
                i++;
            }else{
                if(right>height[j]){
                    ans+=right-height[j];
                }
                else{
                    right = height[j];
                }
                j--;
            }
        }
        return ans;
    }
};