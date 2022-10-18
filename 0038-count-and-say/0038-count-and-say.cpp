class Solution {
public:
     string helper(int n, int count, string ans){
        if(count>n){
            return ans;
        }
        string curr = "";
        int j=0;
        while(j<ans.size()){
            int cnt = 1;
            char ch = ans[j];
            j++;
            while(j<ans.size() && ch == ans[j]){
                cnt++; j++;
            }
            curr += to_string(cnt) + ch;
        }
         return helper(n, count+1, curr);
    }
	
string countAndSay(int n) {
        string ans = "1";
       return helper(n, 2, ans);
    }
};