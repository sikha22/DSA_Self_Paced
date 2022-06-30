#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int recursivePower(int n, int k){
        if(n==0)
        return 1;
        if(n==1)
        return n;
        return pow(n,k);
    }

};
int main(){
    int n;
    int k;
    cout<<"Enter n :";
    cin>>n;
    cout<<"Enter k : ";
    cin>>k;
    Solution rs;
    cout<<"The value obtained is : "<<rs.recursivePower(n,k)<<endl;
    return 0;
}
