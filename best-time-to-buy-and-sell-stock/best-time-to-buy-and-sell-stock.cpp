class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int temp=prices[0];
        int ans=0;
        for(int i=1;i<prices.size();i++)
        {
            temp=min(prices[i],temp);
            ans=max(ans,(prices[i]-temp));
        }
        return ans;
    
    }
};