class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxp = 0;
        int j = 0; 
        int i = 1;

        while(i<n){
            if(prices[i] < prices[j]){
                j = i;
                i++;
            }else{
                maxp = max(maxp, prices[i]-prices[j]);
                i++;
            }
        }

        return maxp;
    }
};
