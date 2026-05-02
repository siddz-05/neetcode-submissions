class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0,c=0,a=0;
        while(i<nums.size()){
            if (nums[i]==1) c++;
            else{
                if(c!=0 && c>a) a=c;
                c=0;
            }
            i++;
        }
        return (a>c)?a:c;

    }
};