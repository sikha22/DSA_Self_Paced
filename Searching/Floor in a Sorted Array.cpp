class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
          int mx=-1;
     int i=0;
     for(int i=0;i<n;i++){
         if(v[i]<=x){
             mx=i;
         }
         
     }
     return mx;
    }
};
