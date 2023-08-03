class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
      for(int i=0;i<matrix.size();i++)
      {
          for(int j=matrix.size()-1;j>i;j--)
              swap(matrix[j][i],matrix[i][j]);
        int m=0,n=matrix.size()-1;
        while(m<n)
        {
            swap(matrix[i][m],matrix[i][n]);
                m++;
            n--;
        }
      }
    }
};