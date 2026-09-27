class Solution {
  public:
    int uniqueElement(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int>mpp;
        for(int i:arr)
        {
            mpp[i]++;
        }
        for(auto it:mpp)
        {
            if(it.second%k!=0)
            return it.first;
        }
    }
};
