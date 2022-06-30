#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int digitalRoot(int n){
        if(n<10)
        return n;
        int l = n%10+ digitalRoot(n/10);
        if(l>9){
            digitalRoot(l);
        }
        else{
            return l;
        }
    }
};
int main(){
    int n;
    cout<<"Enter Numbers : ";
    cin>>n;
    Solution rs;
    cout<<" Digital Root is : "<<rs.digitalRoot(n)<<endl;
    return 0;
}
