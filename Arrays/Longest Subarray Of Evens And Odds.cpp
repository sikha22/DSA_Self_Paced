//{ Driver Code Starts
//Initial Template for C++
#include<iostream> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Complete this function
    //Function to find the length of longest subarray of even and odd numbers.
    int maxEvenOdd(int arr[], int n) 
    { 
       //Your code here
       int length = 1, maxLength = 1;
       for(int i = 0; i < n - 1; i++){
           if((arr[i] & 1) != (arr[i + 1] & 1)){
               length++;
               maxLength = max(length, maxLength);
           }
           else
               length = 1;
       }
       return maxLength;
    } 
};

//{ Driver Code Starts.
int main() 
{ 
    int testcases;
    //testcases
    cin>>testcases;
    while(testcases--)
    {
        int sizeOfArray;
        //size of array
        cin>>sizeOfArray;
        int arr[sizeOfArray];
        
        //inserting elements in the array
        for(int i=0;i<sizeOfArray;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        //calling function
        cout  << ob.maxEvenOdd(arr, sizeOfArray)<<endl; 
    }
   return 0; 
} 

// } Driver Code Ends
