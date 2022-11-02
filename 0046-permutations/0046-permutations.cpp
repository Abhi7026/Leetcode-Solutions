class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int n= nums.size();
        P(nums,0,n,ans);
        return ans;
    }
    void P(vector<int>&nums,int i,int &n,vector<vector<int>>&ans)
    {
        if(i==n)
            ans.push_back(nums);
        for(int j=i;j<n;j++)
        {
            swap(nums[i],nums[j]);
            P(nums,i+1,n,ans);
            swap(nums[i],nums[j]);
        }
    }
};