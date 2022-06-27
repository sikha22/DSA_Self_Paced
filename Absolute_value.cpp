#include<iostream>
using namespace std;
class Solution{
    public:
    int absolute (int I){
    if (I>=0)
    {
        return I;
    }
    else{
        return I*(-1);
    }
}
}ob;
int main(){
    int I;
    cout<<"Enter Number : ";
    cin>>I;
    cout<<"Absolute Number is "<<ob.absolute(I)<<endl;

}