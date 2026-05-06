class Solution {
public:
    bool isPerfectSquare(int num) {
        long l,h;
        l=0;
        h=num;
        while(l<=h){
            long m=(l+h)/2;
            long r=m*m;

            if(r==num) return true;
            if(r>num) h=m-1;
            else l=m+1;
        }
        return false;
    }
};