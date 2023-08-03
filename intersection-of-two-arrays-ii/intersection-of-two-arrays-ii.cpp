class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
            unordered_map<int,int>mpp1;
            unordered_map<int,int>mpp2;
            for(auto it:nums1)
                    mpp1[it]++;
            for(auto x:nums2)
                    mpp2[x]++;
            
            for(auto it:mpp1)
            {
                    for(auto it1:mpp2)
                    {
                          if(it.first==it1.first){
                int k=min(it.second,it1.second);
                while(k--) v.push_back(it.first);  
                    }
            }
            }
            return v;
    }
};