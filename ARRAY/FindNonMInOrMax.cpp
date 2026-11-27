class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int mini;
        int maxi;
        int ans=-1;
        if(nums.size()==1)
        return -1;
        mini=*min_element(nums.begin(),nums.end());
        maxi=*max_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=maxi&&nums[i]!=mini)
            ans= nums[i];
        }
        return ans;
    }
};
