class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())
            return false;
         string str =s + s;
        for(int i = 0; i < s.size(); i++)
            if(str.substr(i,goal.size()) == goal)
                return true;
        
        return false;
    }
};