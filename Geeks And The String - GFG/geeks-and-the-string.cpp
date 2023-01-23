//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string removePair(string s) {
        // code here
        string str="";
        for(int i=0;i<s.size();i++)
        {
            if(str.size()==0 || str.back()!=s[i])
            str+=s[i];
            else
            str.pop_back();
        }
        if(str.size())
        return str;
        else
        return "-1";
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s; 
        cin>>s;
        
        Solution obj;
        string res = obj.removePair(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends