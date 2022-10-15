int cache[101][27][101][101];
class Solution {
public:
  int getLengthOfOptimalCompression(string s, int k) {    
    memset(cache, -1, sizeof(cache));
    function<int(int, int, int, int)> dp =[&](int i, int last, int length, int k) {
      if (k < 0) 
          return INT_MAX / 2;
      if (i >= s.length()) 
          return 0;      
      int& ans = cache[i][last][length][k];
      if (ans != -1)
          return ans;
      if (s[i] - 'a' == last)
      { 
        int carry = (length == 1 || length == 9 || length == 99);
        ans = carry + dp(i + 1, last, length + 1, k);
      } else {
        ans = min(1 + dp(i + 1, s[i] - 'a', 1, k),dp(i + 1, last, length, k - 1));
      }
      return ans;
    };
    return dp(0, 26, 0, k);
  }
};