//{ Driver Code Starts
//Initial Template for C++

// CPP code to find largest and 
// second largest element in the array

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
     

class Solution{
  public:
    /* Function to find largest and second largest element
    *sizeOfArray : number of elements in the array
    * arr = input array
    */
    vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        int max = INT_MIN, max2= INT_MIN;
        
        /*********************************
         * Your code here
         * This function should return a
         * vector with first element as
         * max and second element as 
         * second max
         * *******************************/
         vector<int> res;
        int n = sizeOfArray;
        
        //sorting the array
        sort(arr, arr+n);
        
        // getting the max element directly using STL C++
        int large = *max_element (arr, arr+n);
        
        // pushing the largest element in the temp array
        res.push_back(large);
        
        
        // looping from n-2  to 0 for finding the second 
        //most largest value if it is there then it will
        //append in the temp array.
        
        for(int i = n-2; i >= 0; i--){
            if(arr[i] != arr[n-1]){
                res.push_back(arr[i]);
            }
        }
        
        //if not found it will push -1 as second element
        //doesnot exit
        res.push_back(-1);
        
        
        //at last returning the temp array
        return res;
         
         
    }
};

//{ Driver Code Starts.

// Driver Code
int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    Solution obj;
	    vector<int> ans = obj.largestAndSecondLargest(sizeOfArray, arr);
	    cout<<ans[0]<<' '<<ans[1]<<endl;
	}
	
	return 0;
}
// } Driver Code Ends
