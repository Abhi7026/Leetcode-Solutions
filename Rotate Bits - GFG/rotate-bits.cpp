//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
        vector <int> rotate (int n, int d)
        {
            //code here.
             vector<int> ans;


            d %= 16;

            int temp = (n << d) | ( n >> (16 - d) );
            string binary = std::bitset<16>(temp).to_string();
            temp =stoi(binary,0,2);
            ans.push_back(temp);
            
            temp = ( n >> d ) | ( n << ( 16 - d ) );
            binary = std::bitset<16>(temp).to_string();
            temp =stoi(binary,0,2);
            
            ans.push_back(temp);
            
            return ans;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        
        int n, d; cin >> n >> d;
        Solution ob;
        vector <int> res = ob.rotate (n, d);
        cout << res[0] << endl << res[1] << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends