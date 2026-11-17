class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> res;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            res.insert(nums[i]);
        }
        int count = 0;
        int longest = 0;
        for (auto it : res) {
            int start;
            if (res.find(it - 1) == res.end()) {
                count = 1;
                start = it;
            }
            while (res.find(start + 1) != res.end()) {
                count += 1;
                start = start + 1;
            }
            longest = max(longest, count);
        }
        return longest;
    }
};
