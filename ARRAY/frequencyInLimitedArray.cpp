class Solution {
  public:
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int>res(n,0);
        for(int i=0;i<n;i++)
        {
            res[arr[i]-1]+=1;
        }
      return res;  
        
    }
};
