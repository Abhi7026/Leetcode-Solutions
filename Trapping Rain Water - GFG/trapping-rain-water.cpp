//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        long long l = 0, r = n-1;
        long long lm = 0, rm = 0;
        
        long long ans = 0;
        
        while(l < r)
        {
            // 2 Cases If arr[l] <= or > 
            if(arr[l] <= arr[r])
            {
                if(arr[l] >= lm) lm = arr[l];
                else ans += lm - arr[l];
                
                l++;
            }
            else
            {
                if(arr[r] >= rm) rm = arr[r];
                else ans += rm - arr[r];
                
                r--;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends