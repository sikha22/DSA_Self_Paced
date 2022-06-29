#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void printNos(int N){
        if(N>0){
        printNos(N-1);
       cout<<N<<" ";
        }
        return;
       
   }
};
int main(){
    int N;
    cout<<"Enter Numbers :";
    cin>>N;
    Solution ob;
    cout<<"The Series is :";
    ob.printNos(N);
    cout<<"\n";
   return 0;
}