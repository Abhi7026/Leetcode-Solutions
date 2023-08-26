//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    vector<int>cnt(26);
        int j = 0, distinct = 0, n = s.length(), mx = 0;
        for(int i = 0; i < n; i++){

            int idx = s[i] - 'a';
            if(cnt[idx] == 0)
                distinct++;
            cnt[idx]++;
            
            while(distinct > k){
                cnt[s[j] - 'a']--;
                if(cnt[s[j] - 'a'] == 0)
                    distinct--;
                j++;
            }
            
            if(distinct == k)
                mx = max(mx, i-j + 1);
        }
        if(mx == 0)
            mx = -1;
        return mx;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends