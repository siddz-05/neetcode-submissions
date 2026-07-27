class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> S(n);
        int p;
        for(int i=0 ;i<n;i++){
            p=1;
            for(int j=0;j<n;j++){
                if(i!=j) p*=nums[j];
                S[i]=p;
            }
        }
        return S;
    }
};
