class Solution {
public:
    bool validPalindrome(string s) {
        int i,j;
        i=0;
        j=s.size()-1;

        while(i<j){
            if(s[i]!=s[j]){
                int l = i + 1,r = j;
                bool path=true;
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