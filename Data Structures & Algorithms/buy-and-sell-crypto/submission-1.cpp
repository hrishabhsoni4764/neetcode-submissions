class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int buyMin=prices[0];
        int sellMax;
        for(int i=1;i<prices.size();i++)
        {
            buyMin = std::min(buyMin,prices[i]);
            if(prices[i] > buyMin)
                profit = std::max(profit,prices[i]-buyMin);
        }
        return profit;
    }
};
