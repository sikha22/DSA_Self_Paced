//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 


void printVector(const vector<int>& a) 
{ 
    for (auto e : a) { 
        cout << e << " "; 
    }
    cout<<endl;
} 

// } Driver Code Ends
class Solution{
  public:
    // A, B, and C: input sorted arrays
    //Function to merge three sorted vectors or arrays 
    //into a single vector or array.
    vector<int> mergeThree(vector<int>& A, vector<int>& B, vector<int>& C) 
    { 
        //Your code here
        int n=A.size(),m=B.size(),p=C.size();
       
       vector<int> ans(n+m+p);
       int k=0;
       int i=0,j=0,l=0;
       while(i<n && j<m && l<p)
       {
           if(A[i]<=B[j] && A[i]<=C[l])
           {
               ans[k++]=A[i++];
           }
           else if(B[j]<=C[l])
           {
               ans[k++]=B[j++];
           }
           else
           {
               ans[k++]=C[l++];
           }
       }
       if(i==n)
       {
           while(j<m && l<p)
           {
               if(B[j]<=C[l])
               {
                   ans[k++]=B[j++];
               }
               else
               {
                   ans[k++]=C[l++];
               }
           }
           while(j<m)
           {
               ans[k++]=B[j++];
           }
           while(l<p)
           {
               ans[k++]=C[l++];
           }
       }
       else if(j==m)
       {
           while(i<n && l<p)
           {
               if(A[i]<=C[l])
               {
                   ans[k++]=A[i++];
               }
               else
               {
                   ans[k++]=C[l++];
               }
           }
           while(i<n)
           {
               ans[k++]=A[i++];
           }
           while(l<p)
           {
               ans[k++]=C[l++];
           }
       }
       else
       {
           while(j<m && i<n)
           {
               if(B[j]<A[i])
               {
                   ans[k++]=B[j++];
               }
               else
               {
                   ans[k++]=A[i++];
               }
           }
           while(j<m)
           {
               ans[k++]=B[j++];
           }
           while(i<n)
           {
               ans[k++]=A[i++];
           }
       }
       return ans;
    } 

};

//{ Driver Code Starts.

int main() 
{ 


    int t;
    cin>>t;
    while(t--){
    int n,m,o;
    cin>>n>>m>>o;
    vector<int> A,B,C;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        A.push_back(x);
    }
    
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        B.push_back(x);
    }
    
    for(int i=0;i<o;i++){
        int x;
        cin>>x;
        C.push_back(x);
    }

    Solution obj;
    vector<int>ans = obj.mergeThree(A, B, C);
    for(auto i: ans)cout << i << " ";
    cout << "\n";
    // obj.printVector(mergeThree(A, B, C)); 
    
    }
   
    return 0; 
} 

// } Driver Code Ends
