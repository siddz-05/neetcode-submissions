class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> m;
        for(int i=0 ;i<n;i++){
            int left_out=target-nums[i];
            if(m.find(left_out)!=m.end()) return {m[left_out],i};
            m[nums[i]]=i;
        }
        return {};
    }
};
