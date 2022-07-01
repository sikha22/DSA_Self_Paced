#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void insertAtIndex(int arr[],int sizeOfArray, int index ,int element){
    for(int i=sizeOfArray-2;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index] = element;
}
};
int main(){
    int sizeOfArray;
    //cout<<"Enter Size of an Array : ";
    cout<<"sizeOfArray : ";
    cin>>sizeOfArray;
    cout<<"arr[] :";
    int arr[sizeOfArray];
    
    
    for(int i=0;i<sizeOfArray-1;i++)
        cin>>arr[i];
    
    int index;
    cout<<"Index ";
    cin>>index;
    int element;
    cout<<"element ";
    cin>>element;
    Solution rs;
    rs.insertAtIndex(arr,sizeOfArray,index,element);
    for(int i=0;i<sizeOfArray;i++)
        cout<<arr[i]<<" ";
        cout<<endl;

}





