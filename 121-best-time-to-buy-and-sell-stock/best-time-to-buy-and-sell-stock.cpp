class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0;
        int j=i+1;
        int profit=0;

        while(j<prices.size()){
            if(prices[j]-prices[i]<0){
                i=j;
                
            }
            profit= max(profit,prices[j]-prices[i]);
            j++;
        }
        return profit;
        
    }
};