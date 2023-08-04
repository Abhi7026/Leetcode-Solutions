class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
         int c=32;
        uint32_t k=0;
        while(c--)
        {
            if(n&1)
            k=(k<<1)|1;
            else
            k=(k<<1);
            n=n>>1;
            
        }
        return k;
    }
};