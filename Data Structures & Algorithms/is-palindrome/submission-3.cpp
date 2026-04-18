class Solution {
public:
    bool isPalindrome(string s) {
    string clean ="";

    for(int i = 0; i < s.length(); i++){
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i]>=48 && s[i]<=56)){
            if(s[i] >= 'A' && s[i] <= 'Z')
                clean += s[i] + 32;
            else
                clean += s[i];
        }
    }

    int i = 0;
    int j = clean.length() - 1;

    while(i < j){
        if(clean[i] != clean[j])
            return false;
        i++;
        j--;
    }

    return true;
    }
};
