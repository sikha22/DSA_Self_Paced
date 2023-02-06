//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N) 
    { 
        // Your code here
          vector<int> lmin(N),rmax(N);
        lmin[0] = A[0];  // storing all the minimum values from 0
        for(int i=1;i<N;i++){
            lmin[i] = min(A[i],lmin[i-1]);
        }
        rmax[N-1] = A[N-1]; // storing all the maximum values from N-1
        for(int i=N-2;i>=0;i--){
            rmax[i] = max(A[i],rmax[i+1]);
        }
        
        int i=0,j=0,ans=-1;
        while(i<N and j<N){
            if(lmin[i]<=rmax[j]){
                ans = max(ans,j-i);
                j++;
            }
            else i++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends
