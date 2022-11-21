class Solution {
  vector<pair<int, int>> dirs {
        {0, 1}, {0, -1}, {1, 0}, {-1, 0},
    };
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int m = maze.size();
        int n = maze[0].size();
        queue<vector<int>> q;
        q.push(entrance);
        maze[entrance[0]][entrance[1]] = '+';
        int level = 0;
        while (!q.empty()) {
            int q_len = q.size();
            for (int i = 0; i < q_len; ++i) {
                auto cell = q.front();
                q.pop();
                if (cell != entrance) 
                {
                    if ((cell[0] == 0) || (cell[0] == (m - 1)) ||
                        (cell[1] == 0) || (cell[1] == (n - 1))) {
                        return level;
                    }
                }
                for (auto d : dirs) {
                    int n_row = cell[0] + d.first;
                    int n_col = cell[1] + d.second;
                    if (n_row < 0 || n_row >= m ||
                       n_col < 0 || n_col >= n ||
                        (maze[n_row][n_col] == '+')) 
                        continue;
                    q.push({n_row, n_col});
                    maze[n_row][n_col] = '+';
                }
            }
            level++;
        }
        return -1;
    }
  
};