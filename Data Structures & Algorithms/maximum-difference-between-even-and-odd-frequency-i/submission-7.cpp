class Solution {
public:
    int maxDifference(string s) {
        int odd=0,even=100;
        int A[26]={0};
        for(int i=0;i<s.size();i++){
            A[s[i]-97]++;
        }
        for(int i=0;i<26;i++){
            if(A[i]==0) continue;
            if (A[i] % 2 != 0) {
            if (A[i] > odd) odd = A[i];
            }
            else {
            if (A[i] < even) even = A[i];
            }

        }
        return (odd-even);
    }
};