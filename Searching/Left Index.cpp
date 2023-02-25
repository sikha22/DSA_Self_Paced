// Function to find element in sorted array

int leftIndex(int N, int arr[], int X){
    
    // Your code here
       int low = 0;
  int high = N-1;
  int mid;
  
  while(low <= high){
      mid = (low+high)/2;
      
      if(arr[mid] > X){
          high = mid-1;
      }
      else if(arr[mid] < X){
          low = mid+1;
      }
      else{
          if(mid == 0 || arr[mid-1] != arr[mid]){
              return mid;
          }
          else{
              high = mid-1;
          }
      }
  }
  return -1;


}


