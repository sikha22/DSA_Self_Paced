//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
             int i=0,j=0;
      vector<int>ans;
      for(int k=0;k<n-1;k++){
          if(A[k]<A[k+1])j++;
          else if(A[k]>A[k+1]){
              if(/*i!=0 && j!=0*/ i!=j){
                  ans.push_back(i);
                  ans.push_back(j);
                  i=k+1;
                  j=k+1;
              }
              else if(i==j){
                  i++;
                  j++;
              }
          }
          else if(A[k]==A[k+1]){
              if(i==j){
                 i++;
                 j++;
              }
              else if(i!=j)j++;
          }
      }
      if(i!=j){
        ans.push_back(i);
        ans.push_back(j);
      }
      int si=ans.size()/2;
      vector<vector<int>>v(si);
      if(i==0 && j==0)return v;
      int count=0;
      for(int i=0;i<ans.size();i=i+2){
          v[count].push_back(ans[i]);
          v[count].push_back(ans[i+1]);
          count++;
      }
      return v;
    }
};

//{ Driver Code Starts.

int check(vector<vector<int>> ans, vector<int> A, int p)
{
    int c = 0;
    for(int i=0; i<ans.size(); i++)
        c += A[ans[i][1]]-A[ans[i][0]];
    return (c==p) ? 1 : 0;
}

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for (int i=0; i<n; ++i){
            cin>>A[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.stockBuySell(A, n);
        int p = 0;
        for(int i=0; i<n-1; i++)
        {
            int x = A[i+1]-A[i];
            if(x>0)
                p += x;
        }
        if(ans.size()==0)
            cout<<"No Profit";
        else{
            cout<<check(ans,A,p);
        }cout<<endl;
    }
    return 0;
}


// } Driver Code Ends
