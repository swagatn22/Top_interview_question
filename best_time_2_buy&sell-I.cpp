class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //int profit[prices.size()];
        if(prices.size() == 0 || prices.size() == 1) return 0;
        int buy[prices.size()];
        int sell[prices.size()];
        int profit = 0;
        int x;
        buy[0] = prices[0];
        sell[prices.size()-1] = prices[prices.size()-1];
        for(int i = 1; i<prices.size(); i++){
            buy[i] = min(buy[i-1],prices[i]);
        }
        
        for(int i = prices.size()-2; i>=0; i--){
             sell[i] = max(sell[i+1],prices[i]);
        }
        for(int i = 0; i<prices.size(); i++){
            x = sell[i] - buy[i];
            if(profit < x){
                profit = x;
            }
        }
        return profit;
    }
   
};

//O(n) & O(1)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0 || prices.size() == 1) return 0;
        int min = INT_MAX;
        int profit  =0 ;
        for(int i = 0; i<prices.size(); i++){
            if(prices[i] < min){
                min = prices[i];
            }
            if(prices[i] - min > profit){
                profit = prices[i] - min;
            }
        }
        return profit;
    }
   
};
