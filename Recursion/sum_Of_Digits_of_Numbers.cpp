#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int sumOfdigits(int n){
        if(n==0)
        return 0;
        return (n%10)+sumOfdigits(n/10);
    }
};
int main(){
    int n;
    cout<<"Enter digits : ";
    cin>>n;
    Solution ob;
    cout<<"Sum of Digits is : " << ob.sumOfdigits(n)<<endl;
    return 0;
}