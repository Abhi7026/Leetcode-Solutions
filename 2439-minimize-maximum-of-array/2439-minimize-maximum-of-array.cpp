class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
       int n=nums.size();
        long ans=0,temp=0;
        for(int i=0;i<n;i++)
        {
            temp+=nums[i];
            ans=max(ans,(temp+i)/(i+1));
        }
        return ans;
    }
};