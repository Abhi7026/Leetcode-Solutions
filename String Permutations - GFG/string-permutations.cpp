//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    void fun(string &s,int index,vector<string>&v)
    {
        if(index>=s.size())
        {
            v.push_back(s);
            return;
        }
        for(int i=index;i<s.size();i++)
        {
            swap(s[i],s[index]);
            fun(s,index+1,v);
            swap(s[i],s[index]);
        }
        // return ;
    }
    
    vector<string> permutation(string s)
    {
        //Your code here
        vector<string>v;
        fun(s,0,v);
        sort(v.begin(),v.end());
        return v;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends