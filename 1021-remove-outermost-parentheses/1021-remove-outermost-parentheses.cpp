class Solution {
public:
    string removeOuterParentheses(string s) {
     string st="";
      int j=0;
       for(int i=0;i<s.size();i++){
        if(s[i]==')'){
              j--;
          }
         if(j!=0)
           st+=s[i];

        if(s[i]=='(')
            j++;
        
    }
    return st;   
    }
};