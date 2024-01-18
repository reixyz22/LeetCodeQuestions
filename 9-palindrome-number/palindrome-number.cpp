class Solution {public: bool isPalindrome(int x) {
std::string s = std::to_string(x); //convert it to string

for(int i = 0; i < s.size() /2 ; i++){ 
    if (s[i] != s[s.size()-i-1]){return false;}
}
return true;

}};
