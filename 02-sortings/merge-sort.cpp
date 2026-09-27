void Merge(vector<int>& arr, int l, int mid,int h)
{
    int i=l;
    int j=mid+1;
    vector<int> temp;
    while(i<=mid&&j<=h)
    {
        if(arr[i]<arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid)
    {
        temp.push_back(arr[i]);
            i++;
    }
    while(j<=h){
        temp.push_back(arr[j]);
            j++;
    }
    for(int k=l;k<=h;k++)
    {
        arr[k]=temp[k-l];
    }
    
}
class Solution {
  public:
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        if(l>=r)return;
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        Merge(arr,l,mid,r);
        
    }
};
