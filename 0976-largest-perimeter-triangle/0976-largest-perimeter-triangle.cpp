class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int n=nums.size()-1;
        for(int i=n;i>=2;i--)
        {
            if(nums[i-1]+nums[i-2]>nums[i])
                return nums[i]+nums[i-1]+nums[i-2];
        }
       return 0;
    }
};