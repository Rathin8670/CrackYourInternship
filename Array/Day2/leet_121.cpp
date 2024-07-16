// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MAX;
        int maxProfit=0;
        for(int x:prices){
            if(x>buy){  // means sell the stoke 
                maxProfit=max(maxProfit,x-buy);
            }else{
                buy=x;
            }
        }
        return maxProfit;
    }
};