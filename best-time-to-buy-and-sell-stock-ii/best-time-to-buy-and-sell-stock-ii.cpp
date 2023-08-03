class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        for(int i=1;i<prices.size();i++)
        {
            maxi+=max((prices[i]-prices[i-1]),0);
        }
        return maxi;
    }
};