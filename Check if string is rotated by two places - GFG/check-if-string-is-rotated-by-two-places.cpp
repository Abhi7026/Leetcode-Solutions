//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
         string b1=str1;
        int n=0;

      //anticlockwise rotate
        while(n<2){
            char temp=b1[0];
            int i;
            for(i=0;i<b1.length();i++)
                b1[i]=b1[i+1];
            b1[i-1]=temp;
            n++;
        }
        string b2=str1;
         n=0;

    //clockwise rotate
         while(n<2){
             char temp=b2[b2.length()-1];
             int i;
             for(i=b2.length()-1;i>=0;i--)
             b2[i]=b2[i-1];
             b2[i+1]=temp;
             n++;
         }
         if(b1==str2||b2==str2)
         return true;
         
         return false;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends