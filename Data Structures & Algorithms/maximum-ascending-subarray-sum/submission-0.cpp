class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxsum = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            int cursum = nums[i]; 
            
            for (int j = i; j < n - 1; j++) {
                if (nums[j] < nums[j+1]) {
                    cursum += nums[j+1]; 
                } else {
                    break;
                }
            }
            maxsum = max(maxsum, cursum);
        }
        
        return maxsum;
    }
};