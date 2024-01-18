class Solution {
public:
int romanToInt(string s) {

struct pair { 
    char letter;
    int number;
};
pair x[] = {{'I',1}, {'V',5},{'X',10}, {'L',50},{'C',100}, {'D',500},{'M',1000} };
int value = 0;
int last = INT_MAX;


for(int i= 0; i <= s.length()-1 ;i++)//check each character of input
{ 
    for(int j = 0; j < 7;j++){ // find the matching number in our pair struct
        if(x[j].letter == s[i]){ //add it's number value to total EX V, value +=5
            if (x[j].number <= last){
                value += x[j].number;
            } 
            else{ //if the previous number is smaller EX IV, we need to pair them up
                value -= last; //undo the first part of the pair EX IV, value-=1
                value += (x[j].number-last); //treat the previous two inputs as a group of two, add them to the total EX IV, value+=4
            }
            last= x[j].number;
        }
    }
}
    return value;
    }
};