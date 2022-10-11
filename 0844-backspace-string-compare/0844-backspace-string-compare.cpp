class Solution {
public:
    bool backspaceCompare(string s, string t) {
       return solve(s)==solve(t);
    }
    string solve( string s)
    {
        int n=s.length();
        string ans="";
        int count=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='#')
                count++;
            else
            {
                if(count)
                    count--;
                else
                    ans+=s[i];
             }
        }
        return ans;
    }
};