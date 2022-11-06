class Solution {
public:
    string orderlyQueue(string s, int k) {
      string str=s;
        if(k>1)
        {
            sort(s.begin(),s.end());
            return s;
        }
        else
        {
          for(int i=0;i<str.size();i++)
          {
             s=s.substr(1,str.size())+s[0];
              if(str>s)
              str=s;    
          }
        }
        return str;
    }
};