class Solution {
public:
    int hIndex(vector<int>& cit) {
        int n=cit.size();
        vector<int>v(n+1,0);
        if(n==0)
            return 0;
        for(int i=0;i<n;i++)
        {
            if(cit[i]>=n)
                v[n]++;
            else
                v[cit[i]]++;
        }
        int temp=0;
        for(int i=n;i>=0;i--)
        {
            temp+=v[i];
            if(temp>=i)
                return i;
        }
        
       return 0; 
    }
};
