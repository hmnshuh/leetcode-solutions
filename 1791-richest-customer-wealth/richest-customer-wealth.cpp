class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int high_wealth = INT_MIN;
        int m = accounts.size();
        
        
        for(int i=0; i<m;i++){
            int wealth=0;
            int n = accounts[i].size();
            for(int j=0;j<n;j++){
                wealth= wealth + accounts[i][j];

            }
            if(wealth>high_wealth){
                high_wealth = wealth;
            }
        }
        return high_wealth;
    }
};