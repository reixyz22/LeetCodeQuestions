class Solution {public: int maxProfit(vector<int>& prices) {

    int min = INT_MAX;
    int max = 0;

    for(int i =0; i < prices.size();i++){ //loop through each day
        if (prices[i] < min){min = prices[i];}
        if (prices[i] - min > max){ max = prices[i] - min;}
    }
    return max;

}};