class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
       sort(stones.begin(),stones.end());
        while(stones.size()>1)
        {
         int temp=stones.size()-1;
         int x=stones[temp],y=stones[temp-1];
            stones.pop_back();
            stones.pop_back();
            if(x!=y)
            stones.push_back(x-y);
            sort(stones.begin(),stones.end());     
        }
       if(stones.size()==0)
           return 0;
        
        return stones[0];
        
    }
};