//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int circularSubarraySum(int arr[], int num){
        
        // your code here
        int k=0;
        
        for(int i=0;i<num;i++){
      
            k+=arr[i];
        }

        int sum=arr[0];
        int ans=sum;
       
        for(int i=1;i<num;i++)
        {
            ans=max(sum,ans);
            if(sum<0)
            {
                sum=0;
            }
            
            sum+=arr[i];
        }
        
        ans=max(sum,ans);


        int rum=arr[0];
        int res=rum;
    
        for(int i=1;i<num;i++)
        {
            res=min(rum, res);
            
            if(rum>0)
            {
                rum=0;
            }
            
            rum+=arr[i];

        }
        
        res=min(rum,res);
        
       if(k==res)
       {
           return ans;
       }
       else
       return max(ans, k-res);
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
