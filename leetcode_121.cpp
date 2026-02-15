class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0, bestbuy= prices[0];
        for(int i=1; i<prices.size(); i++){
            if(prices[i]>bestbuy){
                max_profit=max(max_profit,prices[i]-bestbuy);
            }
            bestbuy = min(bestbuy,prices[i]);
        }
        return max_profit;
        
    }
};