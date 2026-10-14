class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      int i,j;
      vector<int>ans;
      for(i=0;i<nums.size()-1;i++)
      { int flag=0;
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[j]>nums[i])
            flag=1;
            else
            if(nums[i]==nums[j])
            flag=2;
        }
        if(flag==0)
        ans.push_back(nums[i]);
      }
      ans.push_back(nums[nums.size()-1]);
      return ans;
    }
};
