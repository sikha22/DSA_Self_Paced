#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    long long sumUnderModulo(long long a, long long b){
        long M = 1000000007;
        a=a%M;
        b=b%M;
        return (a+b)%M;
    }
};
int main(){
    long long a,b;
    cout<<"Enter a :";
    cin>>a;
    cout<<"Enter b :";
    cin>>b;
    Solution rs;
    cout<<"Total sum of a And b is :"<<rs.sumUnderModulo(a,b)<<endl;
    return 0;
}