#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int search(int arr[],int N, int X){
        for(int i=0;i<N;i++){
            if(arr[i]==X){
                return i;
            }
        }
        return -1;
    }
    
};
int main(){
    int N; int X;
    // cout<<"Enter N: ";
    // cin>>N;
    int sizeOfArray;
    cout<<"Enter size of Array :";
    cin>>sizeOfArray;
    int arr[sizeOfArray];
    cout<<"arr[] : "<<" ";
    for(int i=0;i<sizeOfArray;i++){
        
        cin>>arr[i];
    }
    cout<<"Enter X: ";
    cin>>X;
    Solution rs;
    cout<<"Element is at : "<<rs.search(arr,X,sizeOfArray)<<endl;
    return 0;
    
}