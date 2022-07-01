#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int majorityWins(int arr[],int N,int x,int y){
        int f1=0;
        int f2=0;
        for(int i=0;i<N;i++){
            if(arr[i]==x){
                f1++;
            }
        }
        for(int i=0;i<N;i++){
            if(arr[i]==y){
                f2++;
            }
        }
        if(f1>f2){
            return x;
        }
        else if(f2>f1){
            return y;
        }
        else if(f1==f2){
            return min(x,y);
        }
    }
};
int main(){
    int N;
    cout<<"Enter N: ";
    cin>>N;
    int arr[N];
    cout<<"Enter arr[]: ";
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
     int x; int y;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter Y: ";
    cin>>y;
    Solution rs;
    cout<<"Majority Wins: "<<rs.majorityWins(arr,N,x,y)<<endl;
    return 0;
}