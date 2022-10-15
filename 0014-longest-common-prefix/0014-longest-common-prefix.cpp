class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        int n=strs.size();
        if(n==0)
            return s;
        sort(begin(strs),end(strs));
        string temp1=strs[0];
        string temp2=strs[n-1];
        for(int i=0;i<temp1.size();i++)
        {
            if(temp1[i]==temp2[i])
               s+=temp1[i];
            else
                break;
        }
        return s;
        
        
    }
};