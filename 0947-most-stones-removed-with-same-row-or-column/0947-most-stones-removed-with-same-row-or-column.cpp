class Solution {
public:
    bool isValid(vector<int>&pos1,vector<int>&pos2){
        if(pos1[0]==pos2[0])return true;
        if(pos1[1]==pos2[1])return true;
        return false;
    }

    void dfs(vector<vector<int>>&stones,vector<bool>&visited,int indx,int n){
        visited[indx]=true;
        for(int i=0;i<n;i++){
            if(visited[i])continue;
            if (isValid(stones[i], stones[indx]))  dfs(stones, visited, i,n);
        }
    }

    int removeStones(vector<vector<int>>& stones) {
        int n=stones.size();
        vector<bool>visited(n,false);
        int componentCount=0;
        for(int i=0;i<n;i++){
            if(visited[i])
                continue;
            dfs(stones,visited,i,n);
            componentCount++;
        }
        return (n-componentCount);
    }
};