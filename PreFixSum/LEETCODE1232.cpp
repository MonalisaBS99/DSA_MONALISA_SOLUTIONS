class Solution {
public:
    int largestAltitude(vector<int>& nums) {
        vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            if(i==0)res.push_back(nums[i]);
            else
            res.push_back(res[i-1]+nums[i]);
        }
        int max=0;
        for(int i=0;i<res.size();i++)
        {
            if(max<res[i])
            max=res[i];
        }
        return max;
    }
};
