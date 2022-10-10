class Solution {
public:
    int characterReplacement(string s, int K) {
     int n=s.size();
       int ans=0;
       for(int i=0;i<26;i++)
       {
           char ch='A'+i;
           int right=0;   
           int left=0;   
           int count=0;    
           int length=0;  
           while(right<n)
           {
               if(s[right]==ch)
               {
                   length++;
                   ans=max(ans,length);
               }
               else{
                   count++;
                   length++;
                   while(count>K and left<= right){
                       if(s[left]==ch)
                           length--;
                       else{
                          count--;
                           length--;
                       }
                           
                       left++;
                   }
                    ans=max(ans,length);
               }
               right++;
           }
       }
       return ans;   
    }
};