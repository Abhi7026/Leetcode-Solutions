class Solution {
public:
    int integerBreak(int n) {
        int ans=1;
        if(n==2)
            return 1;
        else if(n==3)
            return 2;
        while(n>4)
        {
            ans*=3;
            n-=3;
        }
        ans*=n;
        return ans;
    }
};