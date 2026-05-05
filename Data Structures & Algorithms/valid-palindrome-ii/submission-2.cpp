class Solution {
public:
    bool validPalindrome(string s) {
        int i,j;
        i=0;
        j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                bool path1 = true;
                int left1 = i + 1, right1 = j;
                while (left1 < right1) {
                    if (s[left1++] != s[right1--]) {
                        path1 = false;
                        break;
                    }
                }

                bool path2 = true;
                int left2 = i, right2 = j - 1;
                while (left2 < right2) {
                    if (s[left2++] != s[right2--]) {
                        path2 = false;
                        break;
                    }
                }
                return path1 || path2;
            }
            i++;
            j--;
        }
        return true;
    }
};