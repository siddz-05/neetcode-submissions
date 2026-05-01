class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j,k,i;
        i=j=k=0;
        while(i<nums.size()){
            if(nums[i]==val) i++;
            else{
                nums[k++]=nums[i++];
                j++;
            }
        }

        return j;
    }
};