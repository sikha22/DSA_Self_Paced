#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int josephusProblem(int n, int k){
        if(n==1)
        return 1;
        return (josephusProblem(n-1,k)+k-1)%n+1;
    }
};
int main(){
    int n; int k;
    cout<<"Enter N : ";
    cin>>n;
    cout<<"Enter K :";
    cin>>k;
    Solution rs;
    cout<<"safe position is : "<<rs.josephusProblem(n,k)<<endl;
    return 0;
}