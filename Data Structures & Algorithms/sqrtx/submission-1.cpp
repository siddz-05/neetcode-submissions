class Solution {
public:
    int mySqrt(int x) {
       long l,h;
       l=0;
       h=x;
       long r=0;

       while(l<=h){
        long m=(l+h)/2;

        if(m*m==x) return m;

        if(m*m>x) h=m-1;
        else {
        l=m+1; 
        r=m;     
       } 
    }
       return r;
    }
};