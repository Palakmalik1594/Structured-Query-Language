class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(int aes:asteroids){
            bool destroyed=false;
            while(!st.empty() && st.top()>0 && aes<0){
                if(abs(aes)>abs(st.top())){
                    st.pop();
                    continue;
                }else if(abs(aes)==abs(st.top())){
                    st.pop();
                    destroyed=true;
                    break;
                }else{
                    destroyed=true;
                    break;
                }
            }
            if(!destroyed){
                st.push(aes);
            }

        }
        vector<int>res(st.size());
        for(int i=st.size()-1;i>=0;i--){
            res[i]=st.top();
            st.pop();
        }
        return res;
    }
};