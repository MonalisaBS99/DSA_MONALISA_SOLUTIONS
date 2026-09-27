class Solution{
public:
    int countOdd(int arr[], int n){
          int odd=0;
          for(int i=0;i<n;i++)
          {
            if(arr[i]%2!=0)
            odd+=1;
          }
          return odd;
    }
};
