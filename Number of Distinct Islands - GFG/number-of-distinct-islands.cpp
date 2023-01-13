//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  private:
    int n, m;
    int dir[5] = {0, 1, 0, -1, 0};
    void dfs(int row, int col, vector<vector<int>> &grid, vector<vector<int>> &vis,
             vector<pair<int, int>> &cur, int strt_row, int strt_col)
    { // strt_row and strt_col store coordinates of the first node of a component indexes
        if (row < 0 || row >= n || col < 0 || col >= m || vis[row][col] || grid[row][col] == 0)
            return;
        vis[row][col] = 1;
        cur.push_back({row - strt_row, col - strt_col}); // here {row - strt_row, col - strt_col} will be same for 
        // all identical components thus distinct islands will be stored
        for (int k = 0; k < 4; k++)
        {
            int nrow = row + dir[k];
            int ncol = col + dir[k + 1];
            dfs(nrow, ncol, grid, vis, cur, strt_row, strt_col);
        }
    }

public:
    int countDistinctIslands(vector<vector<int>> &grid)
    {
        n = grid.size();
        m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m));
        set<vector<pair<int, int>>> st; // set will store unique components
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && grid[i][j] == 1)
                {
                    vector<pair<int, int>> cur;
                    dfs(i, j, grid, vis, cur, i, j);
                    st.insert(cur);
                }
            }
        }
        return st.size();
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends