void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        // code here
        int j;
        int n=arr.size();
        for(int i=0;i<=n-1;i++)
        {
            j=i;
            while(j>0&&arr[j-1]>arr[j])
            {
                swap(arr[j-1],arr[j]);
                j--;
            }
        }
    }
};
