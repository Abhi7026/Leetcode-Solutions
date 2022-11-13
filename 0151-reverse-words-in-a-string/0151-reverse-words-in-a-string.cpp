class Solution {
public:
    string reverseWords(string s) {
        
    stack<string> st;
		string str="";
		for(int i=0;i<=s.length();i++)
		{
			if(s[i]==' ' || s[i]=='\0')
			{
				if(str!="")
				{
					st.push(str);
					str="";
				}
			}
			else
			{
				str+=s[i];
			}
		}
		while(!st.empty())
		{
			str+=st.top();
			st.pop();
            
			if(!st.empty())
				str+=" ";
		}
		return str;
	}
};