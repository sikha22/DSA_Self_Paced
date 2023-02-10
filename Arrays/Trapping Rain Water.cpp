//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
          int *v=new int[n];
         for(int j=n-1,max=arr[j];j>=0;j--){
                    if(arr[j]>max)
                    max=arr[j];
                    v[j]=max;
         }
        long long c=0;
         for(int i=0,max=arr[0];i<n;i++){
                  if(arr[i]>max)
                     max=arr[i];
                     
                c+=min(max,v[i])-arr[i];     
         }
         
         delete[] v;
         return c;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends
