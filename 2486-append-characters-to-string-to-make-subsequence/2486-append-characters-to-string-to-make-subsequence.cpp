class Solution {
public:
    int appendCharacters(string s, string t) {
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==t[count])
                count++;
            
        }
        return t.size()-count;
    }
};