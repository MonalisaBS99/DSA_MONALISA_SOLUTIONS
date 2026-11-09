class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int i : nums)
            mp[i]++;
        int res;
        for (auto it : mp) {
            if (it.second > 1)
                res = it.first;
        }
        return res;
    }
};
