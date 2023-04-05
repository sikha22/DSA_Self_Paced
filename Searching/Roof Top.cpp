
class Solution
{
    public:
    //Function to find maximum number of consecutive steps 
    //to gain an increase in altitude with each step.
    int maxStep(int A[], int N)
    {
       //Your code here
         int mx=0,s=0;
     int c=0;
     for(int i=1;i<N;i++){
         s=A[i]-A[i-1];
         if(s<=0){
             c=0;
         }
         if(s>0){
             c++;
             mx=max(mx,c);
         }
     }
     return mx;
    }
};
