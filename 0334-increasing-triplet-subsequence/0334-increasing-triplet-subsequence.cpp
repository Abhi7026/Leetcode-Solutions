class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
       if(nums.size()<3)
           return false;
        int temp1=INT_MAX;
        int temp2=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<=temp1)
                temp1=nums[i];
            else if(nums[i]<=temp2)
                temp2=nums[i];
            else
                return true;
            
        }
        return false;
    }
};