class Solution {
public:
    bool halvesAreAlike(string s) {
       
        int n=s.size();
        int i=0,j=n/2;
        int count=0,c2=0;
        while(i<n/2 || j<n)
        {
 if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                count++;
if(s[j] == 'a' ||s[j] == 'e' ||s[j] == 'i' ||s[j] == 'o' ||s[j] == 'u' ||s[j] == 'A' ||s[j] == 'E' ||s[j] == 'I' ||s[j] == 'O' ||s[j] == 'U')
                c2++;
            i++;
            j++;
        }
        if(count==c2)
            return true;
        return false;
    }
};