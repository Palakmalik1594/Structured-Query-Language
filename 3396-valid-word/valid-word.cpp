class Solution {
public:
    bool isValid(string word) {
        int cv=0;
        int cc=0;
        string vowels="aeiouAEIOU";
        if(word.length()<3){
            return false;
        }
        for(char c:word){
            if(!isalnum(c)){
                return false;
            }else if(isalnum(c)){
                if(isalpha(c)){
                    if(vowels.find(c)!=string::npos){
                        cv++;
                    }else{
                        cc++;
                    }
                }

            }

        }
        if(cc<1 || cv<1){
            return false;
        }
        return true;
    }
};