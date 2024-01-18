#include <stdlib.h>
class Solution {public: int myAtoi(string s) {

    bool minus = false; bool flag = false; bool flag2 = false;
    s = " " + s; //this makes it so i can always check i+1 without being out of range
    string outputStr ="";
    long long int output;
    char* pEnd;

    for(int i = 0; i < s.length();i++){ //loop
        if(s[i]=='+' && (s[i+1] == ' ' || s[i+1] == '+' || s[i+1] == '-')){break;} // edgecase
        if(s[i] != '+' && s[i] != ' '){flag = true;} //chill out until you see something that isn't this stuff
        if(flag == true){ //alert
            if(s[i] == '-'){
                if(flag2 == true || s[i-1] == '+' ){break;}
                minus = true; // use later
            }
            flag2 = true;
            if(isdigit(s[i])){outputStr += s[i];} //if you got a digit give it to the lord and savior outputStr
            else if(s[i] != '-'){break;} //if you aren't a digit ur toast
        }
    }
    
    if(outputStr == ""){return 0;} //if thy lord and savior is naked, conceal thy shame
    output = strtoll (outputStr.c_str(), &pEnd, 10); //make outputStr into output long int
    if(minus == true){output *=-1;} //flip the sign if need
    if(output > INT_MAX){output = INT_MAX;} //clamp if bigger than int max
    if(output < INT_MIN){output = INT_MIN;} //clamp if smaller than int min
    
    return int(output);
}};