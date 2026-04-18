class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!=t.length()) return false;
        int A[26]={0};

        for (int i =0;i<s.length();i++){
            A[s[i]-97]++;
        }

        for (int i =0;i<t.length();i++){
            A[t[i]-97]--;
        }

        for (int i =0;i<26;i++){
            if (A[i]<0) return false;
        }

        return true;
    }
};
