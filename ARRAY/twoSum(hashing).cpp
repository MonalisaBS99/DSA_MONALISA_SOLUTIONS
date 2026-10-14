class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {vector<int>res;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            int ans=target-nums[i];
            if(mp.find(ans)!=mp.end())
            {
                res.push_back(mp[ans]);
                res.push_back(i);

                break;
            }
            else
            {
                mp[nums[i]]=i;
            }

        }
        return res;
    }
};
