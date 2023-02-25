/* The function should return the index of any
   peak element present in the array */

// arr: input array
// n: size of array
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
          int s=0;
     int e=n-1;
     int mid;
     while(s<e){
         mid=(s+e)/2;
         if(arr[mid]<arr[mid+1]){
             s=mid+1;
         }else {
             e=mid;
         }
         
     }
     return s;
    }
};
