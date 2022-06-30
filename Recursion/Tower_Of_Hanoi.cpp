#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    long long toh(int N,int from,int to,int aux){
        if(N>0){
        toh(N-1,from,aux,to);
        cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
        toh(N-1,aux,to,from);
        
        }
        return pow(2,N)-1;
    }
};
int main(){
    int N;
    cout<<"Enter Number of Disks : ";
    cin>>N;
    Solution rs;
    cout<<rs.toh(N,1,3,2)<<endl;
    
    return 0;
}