class Solution {
public:
    int arrangeCoins(int n) {
      long int l,h;
      l=1;
      h=n;
      long int r=0;

      while(l<=h){
        long int m=(l+h)/2;
        long int c= m*(m+1)/2;

        if(c<=n){
            r=m;
            l=m+1;
        }
        else h=m-1;
      
    }
    return r;
    }
    
};