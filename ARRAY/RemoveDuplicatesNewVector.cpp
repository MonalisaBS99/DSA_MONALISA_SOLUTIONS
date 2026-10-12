class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        int i,j;
        j=1;
        int n=arr.size();
        vector<int>ans;
        set<int>visited;
        for(i=0;i<n;i++)
        {
            if(visited.find(arr[i])==visited.end())
            {
            ans.push_back(arr[i]);
            visited.insert(arr[i]);
        }
        }
        return ans;
    }
};
