//User function Template for C++

class Solution
{
    public:
    //Function to return the maximum water that can be stored.
    int maxWater(int height[], int n) 
    { 
        //Your code here
         int low = 0, high = n - 1;
       int gap, mx = 0, mn;
       
       while(low < high){
           mn = min(height[low], height[high]);
           gap = mn * (high - low - 1);
           mx = max(mx, gap);
           
           
           if(height[low] < height[high])
               low++;
           else
               high--;
       }
       
       return mx;
    } 
};

