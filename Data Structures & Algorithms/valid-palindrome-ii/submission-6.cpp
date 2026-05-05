class Solution {
public:
    bool validPalindrome(string s) {
        int i,j,l,r;
        bool path=true;
        i=l=r=0;

        j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                l = i + 1;
                r = j;
                while (l < r) {
                    if (s[l++] != s[r--]) {
                        path= false;
                        break;
                    }
                }
                if(path) return true;

                path = true;
                l = i;
                r = j - 1;
                while (l < r) {
                    if (s[l++] != s[r--]) {
                        return false;
                    }
                }
                return true;
            }
            i++;
            j--;
        }
        return true;
    }
};