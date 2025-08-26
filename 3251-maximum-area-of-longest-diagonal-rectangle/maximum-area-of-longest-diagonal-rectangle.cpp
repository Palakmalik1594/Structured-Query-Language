class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& d) {
        int n=d.size();
        int m=d[0].size();
        int maxi=0;
        int final=0;
        for(int i=0;i<n;i++){
            int l=d[i][0];
            int w=d[i][1];
            int p=l*l+w*w;
            int area=l*w;
            if(p>maxi || (p == maxi && area > final)){
            maxi=p;
            final=area;
            }
        }
        return final;
    }
};