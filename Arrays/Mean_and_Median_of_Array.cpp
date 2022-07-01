#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int median(int a[], int N){
        sort(a,a+N);
        if(N%2 != 0){
        return a[N/2];
        }
        return (a[(N-1)/2] + a[(N+1)/2])/2;

    }
    int mean(int a[],int N){
        int sum =0; int mean;
        for(int i=0;i<N;i++){
            sum+=a[i];
        }
        mean = sum/N;
        return mean;
    }
};
int main(){
    //int a[];
    int N;
    cout<<"Enter N : ";
    cin>>N;
    int a[N];
    cout<<"Enter a[] : ";
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    Solution rs;
    cout<<"Mean is : "<<rs.mean(a,N)<<"  "<<"Median is : "<<rs.median(a,N)<<endl;
    return 0;

}