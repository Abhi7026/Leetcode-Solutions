class Solution {
public:
int solve(int i,int j,int k,string word,vector<vector<char>>& board)
{
    if(i<0 || j<0 || i==board.size() || j==board[0].size())
        return false;
    if(k==(word.length() -1) && board[i][j]==word[k])
        return true;
    if(word[k]==board[i][j])
    {
        if(i+1<board.size())
          {
              board[i][j]='.';
              if(solve(i+1,j,k+1,word,board))
                  return true;
              board[i][j]=word[k];
          }
          if(j+1<board[0].size())
          {
              board[i][j]='.';
              if(solve(i,j+1,k+1,word,board))
                  return true;
              board[i][j]=word[k];
          }
          if(i-1>=0)
          {
              board[i][j]='.';
              if(solve(i-1,j,k+1,word,board))
                  return true;
              board[i][j]=word[k];
          }
        if(j-1>=0)
        {
            board[i][j]='.';
              if(solve(i,j-1,k+1,word,board))
                  return true;
              board[i][j]=word[k];
        }

    }
   return false;
}
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
                if(word[0]==board[i][j])
                {
                    if(solve(i,j,0,word,board))
                        return true;
                }
            }
        }
        return false;
        
    }
};