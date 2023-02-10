//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long numGame(long long n) {
        // code here
        if(n==0)
       return m;
       else
       return hcf(n,m%n);
   }
    long long numGame(long long n) {
        // code here
        if(n==1)
       return 1;
       long long i,j,p=1;
       for(i=2;i<=n;i++){
           long long h=1;
           h=hcf(i,p);
           p=(p*(i/h))%1000000007;
       }
       return p;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        
        cin>>n;

        Solution ob;
        cout << ob.numGame(n) << endl;
    }
    return 0;
}
// } Driver Code Ends
