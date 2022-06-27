#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int digitsInfactorial(int D){
        if (D<0)
        return 0;
        if (D<=1)
        return 1;
        else{
        double R =0;
        for(int i=2;i<=D;i++)
            R=R+log10(i);
            return floor(R)+1;
        }

    }
};
int main(){
    int D;
    cout<<"Enter the factorial value : ";
    cin>>D;
    Solution obj;
    cout<<"The total digits present in factorial is : "<<obj.digitsInfactorial(D)<<endl;
}