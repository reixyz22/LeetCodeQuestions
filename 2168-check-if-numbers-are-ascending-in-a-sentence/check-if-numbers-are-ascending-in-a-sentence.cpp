class Solution {public:bool areNumbersAscending(string s) {

    string num = "";
    int x =INT_MIN;
    s = " " + s + " "; //so I can use i - 1 in peace

    for(int i=1; i<s.length();i++){ 
        if(isdigit(s[i])){ 
            num += s[i]; //concat digits to a string
        }
        if( isdigit(s[i]) == false && isdigit(s[i-1]) ){ //if this char isn't a digit but the previous number was then num is ready to be compared
            if (stoi(num) > x){ x = stoi(num); num = "";} else{ return false;} //if ascend loop else return false
        }
    }
    return true; //nums ascend
}};