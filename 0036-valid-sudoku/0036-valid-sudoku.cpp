class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
         vector <unordered_set <char>> row (9);
         vector <unordered_set <char>> col (9);
         vector <unordered_set <char>> box (9);
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')
                    continue;
                    if (!((row[i].find(board[i][j]) == row[i].end()) && 
                    (col[j].find(board[i][j]) == col[j].end()) &&
                    (box[j/3 + (i/3) * 3].find(board[i][j]) == box[j/3 + (i/3) * 3].end())))
 
                {
                    return false;   
                }
                
                row[i].insert(board[i][j]);
                col[j].insert(board[i][j]);
                box[j/3 + (i/3) * 3].insert(board[i][j]);
                
            }
        }
        return true;
    }
};