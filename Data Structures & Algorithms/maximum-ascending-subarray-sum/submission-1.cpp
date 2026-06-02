class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxsum = nums[0];
        int cursum = nums[0];
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i-1] < nums[i]) {
                cursum += nums[i];
            } else {
                cursum = nums[i]; 
            }
            maxsum = max(maxsum, cursum);
        }
        
        return maxsum;
    }
};