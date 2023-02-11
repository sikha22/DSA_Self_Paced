//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    //Function to find minimum adjacent difference in a circular array.
    // arr[]: input array
    // n: size of array
    int minAdjDiff(int arr[], int n){    
        // Your code here
        int temp [n];

        for(int i =0;i<n;i++){
            if(i==n-1){
                temp[i] = arr[0] - arr[n-1]; 
                temp[i] = abs(temp[i]);
            }
            else{
            temp[i] = arr[i] - arr[i+1];
            temp[i] = abs(temp[i]);
        }}
        int min = temp[0];
    // search num in inputArray from index 0 to elementCount-1 
    for(int i = 0; i < n; i++){
        if(temp[i] < min){
            min = temp[i];
        }
    }
    return min;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; //Input testcases
    
    while(t--) //While testcases exist
    {
        int n;
        cin>>n; //Input size of array
        
        int arr[n]; //Array of size n
        
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i]; //input elements of array
        }
        Solution ob;
        
        cout << ob.minAdjDiff(arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends
