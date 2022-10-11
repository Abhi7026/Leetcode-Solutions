class Solution {
public:
    string decodeString(string s) {
     stack<char> st;
        string ans = "";

        for(int i = 0 ; i < s.length(); i++)
        {
            if(s[i] == ']')
            {    
                string num = "";
                string chr = "";
                while(!st.empty() and st.top() >= 'a' and st.top() <= 'z')
                {
                    chr = st.top() + chr;
                    st.pop();
                }
                st.pop();
                while(!st.empty() and isdigit(st.top()))
                {
                    num = st.top() + num;
                    st.pop();
                }
                int n = stoi(num);
                while(n > 0)
                {
                    for(int i = 0 ; i < chr.size(); i++)
                        st.push(chr[i]);
                    n--;
                }
            }
            else
                st.push(s[i]);     
        }
        while(!st.empty())
        {
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};