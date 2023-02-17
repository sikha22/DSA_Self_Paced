//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int _gcd(int a,int b)
{
    if(b==0)
    return a;
    else 
    return _gcd(b,a%b);
}
	vector<int>LargestFraction(int n, int d){
	    // Code here
	     int num=0,den=1;
    
    for(int q=10000;q>=2;q--){
        int p=(n*q-1)/d;
        if(p*den>=q*num){
            num=p;
            den=q;
        }
    }
    int g=_gcd(num,den);
    vector<int>ans;
    ans.push_back(num/g);
    ans.push_back(den/g);
    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, d;
		cin >> n >> d;
		Solution ob;
		vector<int>ans = ob.LargestFraction(n, d);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends
