class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        int it=0;
      int sum=0;
      for(int i=0;i<n;i++){
         sum += arr[i];
         while(sum>s){
              sum -= arr[it];
              it++;
          }
         if(sum==s){
              return {it+1, i+1};
          }
      }
      return {-1}; 
    }
};
