//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int Count(vector<vector<int> >& a) {
        // Code here
         int n=a.size();
        int m=a[0].size();
        int num=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]==1){
                    int cnt=0;
                    if(i+1<n && !a[i+1][j]) cnt++;
                    if(i-1>=0 && !a[i-1][j])  cnt++;
                    if(j+1<m && !a[i][j+1]) cnt++;
                    if(j-1>=0 && !a[i][j-1]) cnt++;
                    
                    if(i+1<n && j-1>=0 && !a[i+1][j-1]) cnt++;
                    if(i+1<n && j+1<m && !a[i+1][j+1]) cnt++;
                    if(i-1>=0 && j+1<m && !a[i-1][j+1]) cnt++;
                    if(i-1>=0 && j-1>=0 && !a[i-1][j-1]) cnt++;
                    
                    
                    if(cnt && cnt%2==0)  num++;
                }
            }
        }
        return num;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends