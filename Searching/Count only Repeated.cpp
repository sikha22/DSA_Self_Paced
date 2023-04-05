//User function template for C++


class Solution
{
    public:
    //Function to find repeated element and its frequency.
    pair<int, int> findRepeating(int *arr, int n){
        //code here
         int freq=n-(arr[n-1]-arr[0]);
      
      int low=0;
      int high=n-1;
      
      while(low<=high)
      {
          int mid=(low+high)/2;
          if(arr[mid]==arr[mid+1]   || arr[mid]==arr[mid-1])
          return {arr[mid],freq};
          
          else if(arr[mid]-arr[low]==mid-low)
          {
              low=mid+1;
          }
          else
          {
              high=mid-1;
          }
      }
      
      return {-1,-1};
    }
};
