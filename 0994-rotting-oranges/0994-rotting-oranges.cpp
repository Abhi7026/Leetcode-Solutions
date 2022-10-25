class Solution {
public:
   int orangesRotting(vector<vector<int>>& grid) {
        int i,j,k,m,n, size, count=0;
        m = grid.size();
        n = grid[0].size();
        queue<pair<int, int>> que;
        vector<vector<int>> visited(m, vector<int> (n, 0));
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                if(grid[i][j]==2)
                    que.push({i,j});
            }
        }
        
        while(!que.empty())
        {
            size = que.size();
            bool que_modified = false;
            for(k=0; k<size; k++)
            {
                auto p = que.front();
                i = p.first;
                j = p.second;
                que.pop();
                if(i-1>=0 && grid[i-1][j]==1)
                {
                    grid[i-1][j]=2;
                    que.push({i-1, j});
                    que_modified = true;
                }
                if(i+1<m && grid[i+1][j]==1)
                {
                    grid[i+1][j]=2;
                    que.push({i+1, j});
                    que_modified = true;
                }
                if(j-1>=0 && grid[i][j-1]==1)
                {
                    grid[i][j-1]=2;
                    que.push({i,j-1});
                    que_modified = true;
                }
                if(j+1<n && grid[i][j+1]==1)
                {
                    grid[i][j+1]=2;
                    que.push({i,j+1});
                    que_modified = true;
                }
            }
            if(que_modified)
                count++;            
        }
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                if(grid[i][j]==1)
                    return -1;
            }
        }
        return count;
    }
};