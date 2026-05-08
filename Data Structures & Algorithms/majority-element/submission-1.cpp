class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int a=nums[0];
        int c=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==a) c++;
            else c--;
            if(c<0){ 
                a=nums[i];
                c=1;
                }
        }
        return a;
    }
};