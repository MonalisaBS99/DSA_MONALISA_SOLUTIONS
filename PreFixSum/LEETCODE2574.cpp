class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>rs;
        for(int i=0;i<nums.size();i++)
        {
            if(i==0)
            rs.push_back(nums[i]);
            else
            rs.push_back(rs[i-1]+nums[i]);
        }
        int n=nums.size();
    vector<int>ps;
        for(int i=0;i<rs.size();i++)
        {
            if(i==0)ps.push_back(abs(0-(rs[n-1]-rs[i])));
            else
            ps.push_back(abs(rs[i-1]-(rs[n-1]-rs[i])));
        }
    return ps;
    }
};
