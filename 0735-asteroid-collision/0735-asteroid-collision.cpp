class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
    stack<int> st;
    for(int i=0;i<n;i++) {
        if(st.empty())
            st.push(asteroids[i]);
        else 
        {
            if(asteroids[i] < 0 && st.top() > 0)
            {
                int a = asteroids[i] * -1;
                int b = st.top();
                st.pop();
                if(a == b)
                    continue;
                else if(a > b)
                    i = i-1;
                else 
                    st.push(b);
            }
            else 
                st.push(asteroids[i]);
        }
    }
    vector<int> ans;
    while(!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }
   reverse(ans.begin(),ans.end());
    return ans; 
    }
};