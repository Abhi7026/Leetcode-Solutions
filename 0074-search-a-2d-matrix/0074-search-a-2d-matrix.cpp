class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int m=matrix.size();
        int n=matrix[0].size();
       /*
         for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==target)
                    return true;
            }
        }
        return false;*/
        int l=0,h=m*n-1;
         while(l<=h)
        {
            int mid = l+(h-l)/2;
            if(target== matrix[mid/n][mid%n])
                return true;
            if(target > matrix[mid/n][mid%n]) 
                l= mid+1;
            else h = mid-1;
        }
        return false;        
    }
};