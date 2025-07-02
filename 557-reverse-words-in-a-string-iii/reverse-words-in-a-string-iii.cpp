class Solution {
public:
    string reverseWords(string s) {
        s+=" ";
        queue<string>st;
        string ss="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                if(!ss.empty()){
                    reverse(ss.begin(),ss.end());
                    st.push(ss);
                }
                ss="";
            }else{
                ss+=s[i];
            }
        }
        string ans="";
        while(!st.empty()){
            ans+=st.front();
            st.pop();
            if(!st.empty()){
                ans+=" ";
            }
        }
        return ans;
    }
};