//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long countPairs(int n, int arr[], int k) {
        // code here
          long long c=0;

       for(int i=0;i<n;i++){

           arr[i]=arr[i]%k;

       }

       map<int,int> m;

       for(int i=0;i<n;i++){

           m[arr[i]]++;

       }

       for(auto x: m){

           if(x.second>1){

               c+=(x.second*(x.second-1))/2;

           }

       }

       return c;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n;
        
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        cin>>k;

        Solution ob;
        cout << ob.countPairs(n,arr,k) << endl;
    }
    return 0;
}
// } Driver Code Ends