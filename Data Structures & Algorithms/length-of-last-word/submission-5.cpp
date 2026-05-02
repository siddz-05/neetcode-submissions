class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0,i=s.size()-1;
        while(s[i]==' '){
            i--;
        }
        while(s[i]!=' ' && i>=0){
            c++;
            i--;
        }
        
        return c;
    }
};