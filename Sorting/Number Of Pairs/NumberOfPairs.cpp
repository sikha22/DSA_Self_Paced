//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
 

class Solution{
    public:
    
    // X[], Y[]: input arrau
    // M, N: size of arrays X[] and Y[] respectively
    //Function to count number of pairs such that x^y is greater than y^x.
    long long countPairs(int X[], int Y[], int M, int N)
    {
       //Your code here
       sort(Y,Y+N);
       long long int ans = 0;
       for(int i=0;i<M;i++) {
           if(X[i]==0) {
               continue;
           }
           else if(X[i]==1) {
               ans += upper_bound(Y,Y+N,0) - lower_bound(Y,Y+N,0);
           }
           else {
               ans += upper_bound(Y,Y+N,0) - lower_bound(Y,Y+N,0);
               ans += upper_bound(Y,Y+N,1) - lower_bound(Y,Y+N,1);
               ans += N - (upper_bound(Y,Y+N,X[i]) - Y);
               if(X[i]==2) {
                    ans -= upper_bound(Y,Y+N,3) - lower_bound(Y,Y+N,3);
                    ans -= upper_bound(Y,Y+N,4) - lower_bound(Y,Y+N,4);
               }
               else if(X[i]==3) {
                   ans += upper_bound(Y,Y+N,2) - lower_bound(Y,Y+N,2);
               }
           }
       }
       return ans;
    }
};


//{ Driver Code Starts.
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int M,N;
		cin>>M>>N;
		int i,a[M],b[N];
		for(i=0;i<M;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<N;i++)
		{
			cin>>b[i];
		}
		Solution ob;
		cout<<ob.countPairs(a, b, M, N)<<endl;
	}
}
// } Driver Code Ends
