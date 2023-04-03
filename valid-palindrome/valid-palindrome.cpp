class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(int i=0;i<s.size();i++)
        {
            if(isupper(s[i]))
                s[i]=tolower(s[i]);
             if(isalnum(s[i])) 
                str.push_back(s[i]);
            
        }
        string res=str;
        reverse(res.begin(),res.end());
        return res==str;
        
    }
};