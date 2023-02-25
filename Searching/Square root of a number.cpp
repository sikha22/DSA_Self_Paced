// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
         if(x == 1)
           return 1;
       
       long long int start = 1, end = x/2;
       while(start <= end){
           long long int mid = start + (end - start)/2;
           
           if(mid * mid == x)
               return mid;
           else if(mid * mid < x)
               start = mid + 1;
           else
               end = mid - 1;
       }
       return start - 1;
    }
};
