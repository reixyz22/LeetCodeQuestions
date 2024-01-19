class Solution {public: string longestCommonPrefix(vector<string>& strs) {
    string pre = ""; //solution will be concat here

    if(strs.size() == 1){return strs[0];} //edgecase
    if(strs[0].size() == 0){return "";} //edgecase

    for(int i = 0; i < INT_MAX ;i++){ //loop through your letters
        for(int j = 0; j < strs.size() - 1; j++){ //loop through each word
            if (strs[j][i] !=strs[j+1][i] || //if they stop matching up this is the end
                strs[j].length() == i )//or if you reach the end of a word
                {return pre;
            }
        }
        pre += strs[0][i]; 
    }
return 0;}};