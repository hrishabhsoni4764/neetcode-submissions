class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0, buyMin=prices[0];
        for(int price: prices)
        {
            buyMin = std::min(buyMin,price);
            profit = std::max(profit,price-buyMin);
        }
        return profit;
    }
};
