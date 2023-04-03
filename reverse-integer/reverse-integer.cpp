class Solution {
public:
     int reverse (int x){
         long long int sum=0;
         if(x/10==0)
             return x;
         while(x)
         {
             sum=sum*10+(x%10);
             x/=10;
         }
         return (sum<INT_MIN || sum>INT_MAX?0:sum);
     }
};