

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
         int i=0;
        while(i < n){
            //cout << a[i] << endl;
            int temp = arr[arr[i]-1];
            if(arr[i] <= 0 || arr[i] > n || i+1 == arr[i] || temp == arr[i]){
                i++;
                continue;
            }
            //int temp = a[a[i]-1];
            arr[arr[i]-1] = arr[i];
            arr[i] = temp;
            
        }
        for(i=0; i<n; i++){
            if(arr[i] != i+1) return i+1;
        }
        return i+1;
    } 
};
