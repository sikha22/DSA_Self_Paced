//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    
    // A[]: input array
    // N: size of array
    //Function to sort the array according to difference with given number.
    void sortABS(int A[],int N, int k)
    {
       //Your code here
        map<int, vector<int>> m;
       for(int i=0;i<N;i++)
       {
           int d=abs(k-A[i]);
           m[d].push_back(A[i]);
       }
       int j=0;
       for(auto itr=m.begin();itr!=m.end();itr++)
       {
           int f=itr->second.size();
           int l=0;
           while(f>0)
           {
               A[j++]=itr->second[l];
               l++;
               f--;
           }
           
       }
    }

};

//{ Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    
	    int N, diff;
	    cin>>N>>diff;
	    int A[N];
	    
	    for(int i = 0; i<N; i++)
	        cin>>A[i];
	   
	    Solution ob;
	   
	    ob.sortABS(A, N, diff);
	    
	    for(int & val : A)
	        cout<<val<<" ";
	    cout<<endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
