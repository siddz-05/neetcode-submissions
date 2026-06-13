class Solution {
public:
    void merge(vector<int>&A,int l,int mid,int h){
        if(l<h){
        int i=l;
        int j=mid+1;
        int k=l;
        vector<int> B(A.size());
        while(i<=mid && j<=h){
            if(A[i]<A[j]){
                B[k++]=A[i++];
            }
            else{
                B[k++]=A[j++];
            }
        }
        for(;i<=mid;i++){
            B[k++]=A[i];
        }
        for(;j<=h;j++){
            B[k++]=A[j];
        }
        for(i=l;i<=h;i++){
            A[i]=B[i];
        }}
    }

    void mergesort(vector<int>&A,int l,int h){
    int mid;
    if(l<h){
        mid=(l+h)/2;
        mergesort(A,l,mid);
        mergesort(A,mid+1,h);
        merge(A,l,mid,h);
    }
}
    

    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
        
    }
};