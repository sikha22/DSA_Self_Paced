//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
    public:
    
    // The function should do the stated modifications in the given array arr[]
    // Do not return anything.
    
    // arr[]: Input Array
    // N: Size of the Array arr[]
    //Function to segregate 0s, 1s and 2s in sorted increasing order.
    void segragate012(int arr[], int N)
    {
        // Your Code Here
        vector<int> nums(3, 0);
        for(int i = 0; i < N; i++) {
               nums[arr[i]]++;
            }
   
   int p = 0;
   for(int i = 0; i < 3; i++) {
       while(nums[i]--) {
           arr[p] = i;
           p++;
       }
   }
    }
};

//{ Driver Code Starts.
int main() {

    int T;
    cin >> T;

    while(T--){
        int N;
        cin >>N;
        int A[N];
        for(int i=0;i<N;i++){
            cin >> A[i];
        }

        Solution ob;
        ob.segragate012(A, N);

        for(int i=0;i<N;i++){
            cout << A[i]  << " ";
        }

        cout << endl;
        
        
    }

}

// } Driver Code Ends
