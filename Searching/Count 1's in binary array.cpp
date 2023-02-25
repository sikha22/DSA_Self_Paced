class Solution{
    public:
    // Function to count number of Ones
    // arr: input array 
    // N: size of input array
    int countOnes(int arr[], int N)
    {
        int i = 0;
       int count=0;
       
        // Your code here
        while(arr[i]&&arr[i]<=N){
           count++;
           i++;
       }
       return count;
    }
};
