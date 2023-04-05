//User function template in C++

class Solution 
{
    public:
   
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        //code here
        int low = A[0];
        int high=0;
        int ans=INT_MAX;
        for(int i=0; i<N; i++)
            high+=A[i];
        while(low<=high){
            int mid = (low+high)/2;
            int j=M;
            int k=0;
            while(j--){
                int sum=0;
                while(k<N){
                    if(sum+A[k]>mid)break;
                    sum+=A[k]; k++;
                }
            }
            if(k==N){
                ans=min(ans,mid);
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans;
    }
};
