class Solution {
  public:
    int firstIndex(vector<int> &arr) {
        // code here
        int index=-1;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==1)
            {
                index=i;
                break;
            }
        }
        return index;
    }
};
