class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0,r=heights.size()-1;
        int maxarea=0;
        int curea=0;

        while(l<r){
            int minh=min(heights[l],heights[r]);
            curea=minh*(r-l);
            maxarea=max(maxarea,curea);
            if(heights[l]<heights[r]) l++;
            else r--;

        }

        return maxarea;
    }

};
