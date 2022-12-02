class Solution {
public:
    bool closeStrings(string word1, string word2) {
       vector<int>v1(26,0),v2(26,0);
        for(auto it: word1)
            v1[it-'a']++;
        for(auto it: word2)
        {
            v2[it-'a']++;
            if(v1[it-'a']==0)
                return false;
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
         if(v1==v2)
             return true;
         return false;
        
        
    }
};