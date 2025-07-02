class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char>v(s.rbegin(),s.rend());
        
        s=v;
    }
};