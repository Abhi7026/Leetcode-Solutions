class Solution {
public:
   int color[2001] = {0};
    bool DFS(int v, vector<int> adj[], vector<int>&res) {
    if(color[v]==1) {
        return false;
    }
	color[v] = 1;

	for(int u = 0; u < adj[v].size(); ++u ) {    
    	if(color[adj[v][u]]==0) { 
             if(!DFS(adj[v][u], adj, res)) { 
                 return false;
             }
		}
        if(color[adj[v][u]]==1) {
             return false;
         }
		
	}
    color[v] = 2;
    res.push_back(v);
	return true;
}    

vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
    int n = prerequisites.size();
	vector<int> adj[numCourses];
	vector<int> res;
	for(int i = 0; i < n; ++i) {
		adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
	}
	for(int v = 0; v < numCourses; ++v) {
        if(color[v]==0) { 
            if (!DFS(v, adj, res))  return {}; 
        }
	}
	return res;
    }   
};