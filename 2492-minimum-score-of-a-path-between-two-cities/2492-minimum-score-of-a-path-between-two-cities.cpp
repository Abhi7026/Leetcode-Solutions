class Solution {
public:
   void findMiniDfs(int node,vector<int> &vis,vector<pair<int,int>>adj[], int &mini)
   {
        vis[node] = 1;
        for(auto it: adj[node])
        {
            if(!vis[it.first]) 
                findMiniDfs(it.first,vis,adj,mini);
            mini = min(mini,it.second);
        }
    }

    int minScore(int n, vector<vector<int>>& roads) {
        
        vector<pair<int,int>> adj[n+1];
        
        for(int i=0;i<roads.size();i++)
        {
            adj[roads[i][0]].push_back({roads[i][1],roads[i][2]});
            adj[roads[i][1]].push_back({roads[i][0],roads[i][2]});
        }
        vector<int>vis(n+1,0);
        int mini = INT_MAX;
        findMiniDfs(1,vis,adj,mini);
        return mini;
    }
};