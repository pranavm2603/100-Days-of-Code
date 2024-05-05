class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // If prices array is empty, return 0
        if (prices.empty())
            return 0;

        // Initialize minimum price and maximum profit
        int minPrice = prices[0];
        int maxProfit = 0;

        // Iterate through prices array
        for (int i = 1; i < prices.size(); ++i) {
            // Update maxProfit by taking the maximum of current maxProfit
            // and the difference between current price and minPrice
            maxProfit = maxProfit > (prices[i] - minPrice) ? maxProfit : (prices[i] - minPrice);
            
            // Update minPrice by taking the minimum of current minPrice
            // and current price
            minPrice = minPrice < prices[i] ? minPrice : prices[i];
        }

        // Return the maximum profit achieved
        return maxProfit;
    }
};
