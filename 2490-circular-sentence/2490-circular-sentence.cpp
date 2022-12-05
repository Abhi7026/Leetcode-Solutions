class Solution {
public:
    bool isCircularSentence(string sentence) {
        
    char temp = sentence[0];
        int n = sentence.size();
        for(int i=0;i<n;i++){
            if(sentence[i] == ' '){
                if(sentence[i-1] != sentence[i+1]){
                    return false;
                }
            }
            if(i==n-1){
                if(temp!=  sentence[i])
                    return false;
            }
        }
        return true;
    }
};