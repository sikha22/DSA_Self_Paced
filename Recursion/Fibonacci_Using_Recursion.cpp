#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int fibonacci(int n){
        if(n==0)
        return 0;
        if(n==1)
        return 1;
        return fibonacci(n-1)+fibonacci(n-2);

    }
};
int main(){
    int n;
    cout<<"Enter series :";
    cin>>n;
    Solution rs;
    cout<<"The fibonacci series of "<<n << "th term is : "<<rs.fibonacci(n)<<endl;
    return 0;
}
