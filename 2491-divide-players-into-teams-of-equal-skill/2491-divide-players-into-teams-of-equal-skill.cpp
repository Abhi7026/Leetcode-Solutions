class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
     int n=skill.size();
        long long temp=0;
        if(n==2)
            return skill[0]*skill[1];
        sort(skill.begin(),skill.end());
        for(int i=0;i<n/2;i++)
        {
            if(skill[i]+skill[n-i-1] !=skill[0]+skill[n-1])
                return -1;
            temp+=skill[i]*skill[n-i-1]; 
        }
        return temp;
        
    }
};