class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() < 2) return 0;

        int max_profit = 0;

       for (int i = 1; i < prices.size(); i++){
         int selling_price  = prices[i];
         for (int j = 0; j < i; j++){
            int curr_profit = selling_price - prices[j];
            max_profit = max (max_profit, curr_profit);
         }
       }
       return max_profit;
    }
};
