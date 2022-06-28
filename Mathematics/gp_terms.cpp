#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    double termOfGP(int N,int A,int B){
        double r = double(B/A);
        return A * pow(r,N-1);

    }
};
int main(){
    int N,A,B;
    cout<<"Enter the GP term :";
    cin>>N;
    cout<<"Enter the 1st term :";
    cin>>A;
    cout<<"Enter the 2nd term :";
    cin>>B;
    Solution gp;
    cout<<"The Nth term of GP is :"<<float(gp.termOfGP(N,A,B))<<endl;
    return 0;
}