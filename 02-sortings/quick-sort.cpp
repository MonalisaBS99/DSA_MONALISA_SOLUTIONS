void swap(int &a,int &b)
{
    int temp;
    temp=a;a=b;b=temp;
}
class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        int pindex;
        if(low<high)
        {
            pindex=partition(arr,low,high);
            quickSort(arr,low,pindex-1);
            quickSort(arr,pindex+1,high);
        }
    }

    int partition(vector<int>& arr, int low, int high) {
        // code here
        int i,j,pivot;
        pivot=arr[low];
        i=low;
        j=high;
        while(i<j)
        {
            while(arr[i]<=pivot&&i<=high)
            {
                i++;
            }
            while(arr[j]>pivot&&j>=low)
            {
                j--;
            }
            if(i<j)
            swap(arr[i],arr[j]);
        }
        
   
        swap(arr[low],arr[j]);
        
        return j;
    }
};
