//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int totalFruits(int N, vector<int> &arr) {
        unordered_map<int,int>mpp;
        int l=0;
        int r=0,n=0;
        while(r<N)
        {
            mpp[arr[r]]++;
            while(mpp.size()>2)
            {
                if(mpp[arr[l]]==1)
                mpp.erase(arr[l]);
                else
                mpp[arr[l]]--;
                l++;
            }
            n=max(n,r-l+1);
            r++;
        }
        return n;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> fruits(N);
        for (int i = 0; i < N; i++) cin >> fruits[i];
        Solution obj;
        cout << obj.totalFruits(N, fruits) << endl;
    }
    return 0;
}

// } Driver Code Ends