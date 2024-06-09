class Solution {public:string intToRoman(int input) {
    
    string output;

    struct pair {
        int number;
        string letter;
    };   
    
    pair dex[] = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };


    for (int i = 0; i < 13; ++i) {
        while (input >= dex[i].number) {
            output += dex[i].letter;
            input -= dex[i].number;
        }
    }
    return output;

}};
