class Solution {
public:
    bool validPalindrome(string s) {
        int i,j;
        int l,r;
        l=r=0;
        i=0;
        j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                bool path1 = true;
                l = i + 1;
                r = j;
                while (l < r) {
                    if (s[l++] != s[r--]) {
                        path1 = false;
                        break;
                    }
                }
                if(path1) return true;

                bool path2 = true;
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