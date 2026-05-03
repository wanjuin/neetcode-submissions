class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_buying_price = prices[0];
        int max_profit = 0;

        for (int price: prices){
            int current_profit = price - min_buying_price;
            min_buying_price = min(min_buying_price, price);
            max_profit = max(max_profit, current_profit);
        }
        return max_profit;
    }
};
