#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int countDigits(int N){
        if(N<10)
        return 1;
        return 1 + countDigits(N/10);
    }
};
int main(){
    int N;
    cout<<"Enter Digits : ";
    cin>>N;
    Solution rs;
    cout<<"Total number of digts present is : " <<rs.countDigits(N)<<endl;
    return 0;
}