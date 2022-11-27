class Solution {
public:
    int pivotInteger(int n) {
        int ans=((n*(n+1))/2)/sqrt((n*(n+1))/2);
        if(ans==sqrt((n*(n+1))/2))
            return sqrt((n*(n+1))/2);
        
        return -1;
    }
};