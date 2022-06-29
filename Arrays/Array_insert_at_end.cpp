#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    void insertAtEnd(int arr[],int sizeOfArray, int element){
        arr[sizeOfArray-1]=element;
    }

int main(){
    int sizeOfArray;
    cout<<"Enter the size of an Array : ";
    cin>>sizeOfArray;
    cout<<"Enter the Element of an Array : ";
    int arr[sizeOfArray];
    
   
    for(int i=0;i<=sizeOfArray-1;i++ ){
        cin>>arr[i];
    }
    
    cout<<"Insert the element at end in Array is : " ;
    int element;
    
    cin>>element;
    
    insertAtEnd( arr , sizeOfArray,  element);
    
    for(int i=0;i<sizeOfArray;i++){
        cout<<arr[i]<<" ";
       
    }
    return 0;
    
}