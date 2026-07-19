class Solution{
    public:
    int maxProfit(vector<int>& prices){
       int max_profit = INT_MIN;
       int min_price = INT_MAX;
       int sz = prices.size();
       for(int i=0; i<sz; i++) {
        if(prices[i]<min_price){
            min_price = prices[i];
        }
        int profit = prices[i]-min_price;
        if(profit>max_profit) {
            max_profit = profit;
        }
       }
       return max_profit;
    }
};