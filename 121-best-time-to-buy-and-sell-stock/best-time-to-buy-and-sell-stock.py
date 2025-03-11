class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profits = [0]
        
        lowest = prices[0]
        for day in prices[1:]:
            profits.append(day - lowest)
            lowest = min(lowest, day)
        
        return max(profits)

