class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        /*given 2d array of accounts x money. need to iterate through
        * each account and add total money. the total needs to be saved in 
        * a var "wealth" that will be updated if new wealth is greater 
        * than current value. wealth will be returned 
        */

        int wealth = 0;
        // start outer for loop for accounts
        for(int i = 0; i < accounts.size(); i++){
            int sum = 0;
            //start inner for loop to count wealth
            for(int j = 0; j < accounts[0].size(); j++){
                sum = sum + accounts[i][j];
            }
            if(sum > wealth){
                wealth = sum;
            }
        }
        return wealth;
    }
};