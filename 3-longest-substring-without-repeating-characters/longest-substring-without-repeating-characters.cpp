class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string sub;
        string sub_max ="";
        bool flag;
        for(int i= 0; i < s.length() +1;i++){
            sub = "";
            for(int j= i; j < s.length();j++){
                flag = false;
                for(int x = 0; x < sub.length(); x++){
                    if (sub[x] == s[j]){
                        flag = true;
                    } 
                }
                if (flag ==false){
                    sub += s[j];
                }else{break;}

            }
            if (sub_max.length() < sub.length() ){
                sub_max = sub;
            }

        }
    return sub_max.length();
    }
};