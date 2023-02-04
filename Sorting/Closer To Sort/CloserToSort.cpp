//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    // arr[]: input array
    // n: size of array
    // x: element to find index
    //Function to find index of element x in the array if it is present.
    int closer(int arr[],int n, int x)
    {
        //Your code here
        int i=0,j=n-1;
       while(i<=j)
       {
           if(arr[i]==x)
           return i;
           else if(arr[j]==x)
           return j;
           else if(arr[j]>x)
           j--;
           else if(arr[i]<x)
           i++;
           }
           return -1;
    }
};


//{ Driver Code Starts.

int main() {
    
    cin.tie(NULL);
    
	int t;
	cin >> t;
	
	while(t--){
	  
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    int x;
	    cin >> x;
	    Solution obj;
	    int res = obj.closer(arr,n,x);
	    
	    cout << res << endl;
	}
	
	return 0;
}
// } Driver Code Ends