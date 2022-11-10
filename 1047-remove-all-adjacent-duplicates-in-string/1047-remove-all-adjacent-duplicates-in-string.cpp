class Solution {
public:
    string removeDuplicates(string s) {
        string str="";
        for(int i=0;i<s.size();i++)
        {
            if(str.empty() || str.back()!=s[i])
         str+=s[i];
            else if(str.back()==s[i])
                str.pop_back();  
        }
        return str;
    }
};