#include<iostream>
using namespace std;
class Solution{
    public:
    int facTonum(int i){
        int factorial =1;
        while(i>0){
            factorial*=i;
            i--;
        }
        return factorial;
    }
};
int main(){
    cout<<"Enter the number : ";
    int i;
    cin>>i;
    
    Solution f;
    cout<<"The factorial is : " << f.facTonum(i) << endl;
    return 0;
}