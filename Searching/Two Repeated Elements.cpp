//User function template for C++

class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int N) {
        // Your code here
        vector<int>count(N+1,0);
     vector<int>ans;
     
     for(int i=0;i<N+2;i++)
     {
         count[arr[i]]+=1;
         if(count[arr[i]]==2)
              ans.push_back(arr[i]);
     }

     return ans;
    }
};
