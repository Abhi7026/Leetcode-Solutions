class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        unordered_map<string, vector<string>> mp;
    
    for(string path: paths){
        string root, file;
        int pos=0;
        bool flag = false;
        int n = path.size();
        for(int i=0; i<=n; i++){
            if(!flag && path[i] == ' '){
                flag = true;
                root = path.substr(0, i);
                pos = i+1;
            }
            else if(path[i] == '('){
                file = path.substr(pos, i-pos);
                pos = i+1;
            }
            else if(path[i] == ')'){
                string key = path.substr(pos, i-pos);
                mp[key].push_back(root +"/" + file);
                pos = i+2;
            }
        }
    }
    vector<vector<string>> ans;
    for(auto it: mp){
        if(it.second.size() == 1) 
            continue;
        
        ans.push_back(vector<string>());
        for(string num: it.second){
            ans.back().push_back(num);
        }
    }
    return ans; 
    }
};