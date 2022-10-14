class Solution {
public:
    int fun( int n)
    {  
        int r,sum=0;
        if(n<=10)
    {
        if(n==1 || n==7 || n==10)
        return 1;
    }
        else
    {
        while(n)
        {
            r=n%10;
            sum+=r*r;
            n=n/10;
        }
     return fun(sum);
    }
        return 0;
    }
    
    bool isHappy(int n) {
       int t=fun(n);
        if(t==1)
            return true;
        else
            return false;  
        
    }
};