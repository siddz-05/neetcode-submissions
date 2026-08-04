class Solution {
public:
    int findMin(vector<int> &nums) {
        int st=0,end=nums.size()-1;
        int res=nums[0];

        while (st<=end){
            if(nums[st]<nums[end]){
                res=min(res,nums[st]);
                break;}

            int mid=st+(end-st)/2;
            res=min(res,nums[mid]);

            if(nums[mid]>=nums[st]) st=mid+1;
            else end=mid-1;
        }
        
        return res;
    }
};
