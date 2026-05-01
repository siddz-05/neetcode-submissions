class Solution {
public:
    int scoreOfString(string s) {
        int c=0;
        int v=0;
        for(int i=0;i<s.size()-1;i++){
            v=s[i]-s[i+1];
            if(v<0) v*=-1;
            c+=v;
        }
        
        return c;
    }
};