class Solution {
public:
    unordered_map<int,vector<int>>mpp;
    Solution(vector<int>& nums) 
    {
     for(int i=0; i<nums.size(); i++)
     {
            mpp[nums[i]].push_back(i);   
     }
    }
    
    int pick(int target) {
         int x= mpp[target].size();

        int i= rand()%x;
        return mpp[target][i]; 
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */