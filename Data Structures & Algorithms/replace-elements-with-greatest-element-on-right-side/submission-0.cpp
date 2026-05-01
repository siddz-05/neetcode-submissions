class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max= -1;
        for (int i=arr.size()-1;i>=0;i--) {
            int currentVal = arr[i];
            arr[i] = max;
            if (currentVal > max) {
                max= currentVal;
        }
        }
        return arr;
    }
};