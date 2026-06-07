class Solution {
public:
    vector<int> sort(vector<int> p){
        int n=p.size();
        int i,j;
        int flag=0;
        for(i=0;i<n-1;i++){
            flag=0;
            for(j=0;j<n-1-i;j++){
                if(p[j]>p[j+1]){
                    swap(p[j],p[j+1]);
                    flag=1;
                }
            }
            if(flag==0) break;
        }
        return p;
    }
    int heightChecker(vector<int>& heights) {
        vector<int>temp=heights;
        int n=heights.size();
        int c=0;
        vector<int> sorted=sort(heights);

        for(int i=0;i<n;i++){
            if(heights[i]!=sorted[i]) c++;
        }

        return c;
        

    }
};