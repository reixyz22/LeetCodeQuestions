class Solution {public: int maxProfit(vector<int>& prices) {

    int min = INT_MAX;
    int max = 0;
    int sum = 0;

    for(int i = 0; i < prices.size() -1;i++){ //loop through each day
        if (prices[i] < min){min = prices[i];}
        if (prices[i+1] - min >= max){ max = prices[i+1] - min;}
        if (prices[i+1] > prices[i]){
            cout << min << endl;
            sum += max;
            min = INT_MAX;
            max = 0;
        }
    }
    return sum;
}};