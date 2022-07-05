#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int numberCounts(int N){
    if(N==1){
        return 0;
    } else if(N%2==0){
        return 1 + numberCounts(N/2);
    }else{
        return 1 + min(numberCounts(N-1),numberCounts(N+1));
    }
}
int main(){
    int N;
    cout<<"Enter N : ";
    cin>>N;
    cout<<numberCounts(N)<<endl;
    return 0;
}