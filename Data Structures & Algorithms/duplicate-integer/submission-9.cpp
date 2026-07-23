class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,n;
        n=nums.size()-1;
        while(i<n){
            if(nums[i]==nums[i+1]){
                return true;
            }
            else i++;
        }
        return false;
    }
};