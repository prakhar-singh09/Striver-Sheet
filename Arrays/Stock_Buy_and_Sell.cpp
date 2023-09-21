// ou are given an array of prices where prices[i] is the price of a given stock on an ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

// CODE
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       //bhullakkad question but trying to remember
       int minsofar  = prices[0];
       int profit=0;
       for(int i=0;i<prices.size();i++){
         minsofar = min(minsofar,prices[i]); 
          int Temp_profit = prices[i] - minsofar;
          profit = max(profit, Temp_profit); 
       } 
       return profit;
    }
};
