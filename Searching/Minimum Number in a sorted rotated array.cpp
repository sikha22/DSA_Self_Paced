
class Solution
{
    public:
    //Function to find the minimum element in sorted and rotated array.
    int minNumber(int arr[], int low, int high)
    {
        // Your code here
        int res = arr[0];
        while(low <= high){
            int mid = (low+high)/2;
            //cout << low << " " << mid << " " << high << endl;
            if(arr[mid] > arr[high]) low = mid+1;
            else if(arr[mid] < arr[low]){
                if(res > arr[mid]) res = arr[mid];
                high = mid-1;
            }
            else{
                if(res > arr[mid]) res = arr[mid];
                if(res > arr[low]) res = arr[low];
                break;
            }
        }
        return res;
    }
};
