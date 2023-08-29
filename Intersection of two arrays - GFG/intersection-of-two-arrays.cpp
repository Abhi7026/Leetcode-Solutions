//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int solve(int min,int max,int min_arr[],int max_arr[]){
        int ans=0;
        unordered_map<int,int>m;
        for(int i=0;i<min;i++)m[min_arr[i]]++;
        for(int i=0;i<max;i++){
            if(m[max_arr[i]]){
                ans++; 
                m[max_arr[i]]=0;
            }
        }
        return ans;
    }
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        if(m<n)return solve(m,n,b,a);
        else return solve(n,m,a,b);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends