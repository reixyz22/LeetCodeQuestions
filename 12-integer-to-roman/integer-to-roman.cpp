class Solution {
public:
    string intToRoman(int num) {
        struct pair{ //letter char struct
            string letter;
            int number;
        };
        
        pair dex [] = {{"I",1}, {"IV",4}, {"V",5}, {"IX", 9}, {"X",10}, {"XL",40}, {"L",50}, {"XC",90}, {"C",100}, {"CD",400}, {"D",500}, {"CM",900}, {"M",1000} };   //array of letter string pair struct
      
        string output = ""; //concat this to make your solution*

        while (true) {
            for(int i = 12; i >= 0 ;i--){ // per size of codex
                if(num / dex[i].number >= 1){ // start backwards and check if you can take this out, if you can then do so. ie: XIV(14) - X(10) = IV(4)
                    output += dex[i].letter; // ^
                    num -= dex[i].number; // ^
                    if(num == 0){ return output;}
                    break;
                }
            }
        }
        return 0;
    }
};