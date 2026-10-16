class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>rs;
        for(int i=0;i<nums.size();i++)
        {
            if(i==0)
            rs.push_back(nums[i]);
            else
            rs.push_back(rs[i-1]+nums[i]);
        }
        return rs;
    }
};
