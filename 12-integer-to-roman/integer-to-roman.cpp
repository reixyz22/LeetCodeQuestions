class Solution { public:string intToRoman(int input) {
    
    string output = ""; //concat this with Romans to make your solution / output

    struct pair{ //letter char pair in c++
        string letter;
        int number;
    };
    pair dex [] = {{"I",1}, {"IV",4}, {"V",5}, {"IX", 9}, {"X",10}, {"XL",40}, {"L",50}, {"XC",90}, {"C",100}, {"CD",400}, {"D",500}, {"CM",900}, {"M",1000} };   //array of letter string pairs
    

    while (true) { //loop through the input
        for(int i = 12; i >= 0 ;i--){ // loop through the pairs starting from the back
            if(input / dex[i].number >= 1){ // start backwards(checking biggest numbers first) and check if you can take this out, if you can then do so. IE: (14)XIV - (10)X = (4)IV
                output += dex[i].letter; // put the Roman into the output IE X
                input -= dex[i].number; // take the corresponding number out of the input IE num -=10 
                if(input == 0){ return output; } //if you 0 out, IE 11 - X = 1. 1 - I == 0 end the program
                break; //if not move onto next part of the input
            }
        }
    }

return 0; // the program never hits this as num==0 will always trigger, but we need this to compile in c++
}};