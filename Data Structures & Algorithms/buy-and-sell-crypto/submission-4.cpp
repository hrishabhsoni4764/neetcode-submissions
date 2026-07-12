class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int buyMin=prices[0];
        for(auto price: prices)
        {
            buyMin = std::min(buyMin,price);
            profit = std::max(profit,price-buyMin);
        }
        return profit;
    }
};
