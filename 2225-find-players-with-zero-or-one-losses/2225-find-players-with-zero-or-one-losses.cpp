class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>>v(2);
        unordered_map<int,int>m;
        for(int i=0;i<matches.size();i++)
        {
           
            if(m[matches[i][1]]>=0 ){
                m[matches[i][1]]=-1;
            }
            else    m[matches[i][1]]--;
            
           if( m[matches[i][0]] >=0) 
               m[matches[i][0]]=1; 
        }
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second>0) 
                v[0].push_back(it->first);
            if(it->second ==-1) 
                v[1].push_back(it->first);
        }
        sort(v[0].begin(),v[0].end());
        sort(v[1].begin(),v[1].end());
        return v;
    }
};