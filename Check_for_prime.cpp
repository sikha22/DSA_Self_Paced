#include<iostream>
using namespace std;
bool isPrime(int n){    
        if(n==1){
            return false;
        }
        
        for(int i=2;i<n;i++){
            if(n%i == 0){
            return false;
            break;
        }
    }
        
        return true;
}
int main(){
    int n,i;
    cout<<"Please enter your number :";
    cin>>n;
    bool isPrimeFlag = isPrime(n);
    if(isPrimeFlag){
        cout<<"Prime number";
    }
    else{
        cout<<"Not Prime number";
    }



}