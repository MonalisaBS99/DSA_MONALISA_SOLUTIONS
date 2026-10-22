class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>v;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(v.find(nums[i])!=v.end())
            {
                int s=abs(i-v[nums[i]]);
                if(s<=k)return true;
            }
            v[nums[i]]=i;
        }
        return false;
    }
};
