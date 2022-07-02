#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool isPowerOfTwo(long long n){
        if(n==1 || n==2 )
        return true;
        if(n%2== 1 || n== 0)
        return false;
        return isPowerOfTwo(n/2);
    }
};
int main(){
    long long n;
    cout<<"ENter N: ";
    cin>>n;
    Solution rs;
    if(rs.isPowerOfTwo(n)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
return 0;
}