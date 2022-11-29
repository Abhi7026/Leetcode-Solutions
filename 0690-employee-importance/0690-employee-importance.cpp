/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        map<int , Employee*>g;
        for(int i =0 ; i  < employees.size() ; i++){
            g[employees[i]->id] = employees[i];
        }
        queue<Employee*>q;
        q.push(g[id]);
        int ans =0 ;
        while(!q.empty()){
            Employee* cur = q.front();
            q.pop();
            ans += cur->importance;
            for(int a : cur->subordinates){
                q.push(g[a]);
            }
        } 
        return ans;

    }
};