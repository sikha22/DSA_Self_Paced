#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    double cTof(int C){
        double resultant = 0;
        resultant = ((1.8*C)+32);
        return resultant;


    }
}a;
int main(){
    int C;
    cout<<"Enter the degree in Celsius : ";
    cin>>C;
    cout<<"Degree in Farenheit is : "<<a.cTof(C)<<endl;
    return 0;
}
