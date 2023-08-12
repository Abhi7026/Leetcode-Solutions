//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here
        vector<int> sub;
        sub.push_back(a[0]);
        for (int i=1;i<n;i++) {
            if (sub.back()< a[i]) {
                sub.push_back(a[i]);
            } else {
                auto it = lower_bound(sub.begin(), sub.end(), a[i]); 
                *it = a[i]; 
            }
        }
        return sub.size();
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends