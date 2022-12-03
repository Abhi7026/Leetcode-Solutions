class Solution {
public:
    static bool cmp(string&a, string &b)
    {
        if(a.length()==b.length()) 
            return a[0]<b[0];
        return a.length()>b.length();
    }
    string frequencySort(string s) {
        vector<string> v(256,"");
        for(auto c :s){
           if(c>='a'&&c<='z')
               v[c-'a']+=c;
            else if(c>='A'&&c<='Z')
                v[c-'A'+26]+=c;
            else 
                v[c-'0'+26+26]+=c;
        }
        sort(v.begin(),v.end(),cmp);
        string ans;
        for(auto st : v){
            if(st!="")ans+=st;
        }
        return ans;
    }
};