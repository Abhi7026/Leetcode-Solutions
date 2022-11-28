class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
         unordered_map<int,int> one_row;
        unordered_map<int,int> one_col;
        unordered_map<int,int> zero_row;
        unordered_map<int,int> zero_col;
        for(int i = 0 ; i < grid.size() ;i++){
            for(int j =0 ; j < grid[0].size() ;j++){
                if(grid[i][j]==0){
                    zero_row[i]++;
                    zero_col[j]++;
                }
                else{
                    one_row[i]++;
                    one_col[j]++;
                }
            }
        }
        vector<vector<int>> ans(grid.size(),vector<int>(grid[0].size()));
        for(int i = 0 ; i < grid.size() ;i++){
            for(int j = 0 ; j< grid[0].size() ;j++){
                ans[i][j] = one_row[i] + one_col[j] - zero_row[i] - zero_col[j];
            }
        }
        return ans;
    }
};