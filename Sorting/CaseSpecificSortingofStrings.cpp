//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
           string lowercase = "";
        string uppercase = "";
        for(int i = 0;i<str.size();i++){
            if(str[i] >= 'a' && str[i] <= 'z')lowercase += str[i];
            else{
                uppercase += str[i];
            }
        }
        sort(lowercase.begin(),lowercase.end());
        sort(uppercase.begin(),uppercase.end());
        int a = 0;
        int b = 0;
        for(int i = 0;i<str.size();i++){
            if(str[i] >= 'a' && str[i] <= 'z'){
                str[i] = lowercase[a];
                a++;
            }
            else{
                str[i] = uppercase[b];
                b++;
                
            }
        }
        return str;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends
