class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n=nums.size();
        int min1=INT_MAX;
        long long int sum=0;
        for(int i=0;i<nums.size();i++)
            sum=sum+nums[i];
        int j;
        long long int temp,temp1;
        long long int sum1=0;
        for(int i=0;i<nums.size();i++)
        {
            sum1=sum1+nums[i];  
             temp=sum1/(i+1);
            
             sum=sum-nums[i];    
             if(n-i-1==0)
                 temp1=0;
             else 
                 temp1=sum/(n-i-1);
            
            if(min1>(abs(temp-temp1)))
            {
                min1=abs(temp-temp1);
                j=i;
            }
        }
        return j; 
    }
};