class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size(),i,j=1;
        if(n==0)
            return 0;
        for(i=1;i<n;i++){
            if(nums[i]==nums[i-1])
                continue;
            else
            {
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
        
    }
};