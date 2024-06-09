#include <vector>
#include <string>
#include <utility>

class Solution {
public:
    std::string intToRoman(int num) {
        std::vector<std::pair<int, std::string>> values = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
        };

        std::string result;
        for (auto& [value, roman] : values) {
            while (num >= value) {
                result += roman;
                num -= value;
            }
        }
        return result;
    }
};
