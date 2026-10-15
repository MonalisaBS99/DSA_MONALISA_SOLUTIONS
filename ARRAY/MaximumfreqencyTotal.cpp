class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(101, 0);
        for (int i = 0; i < n; i++)
            res[nums[i]] += 1;
        int max = INT_MIN;
        int count = 0;
        for (int i = 0; i <= 100; i++) {
            if (max <= res[i])
                max = res[i];
        }
        for (int i = 0; i <= 100; i++) {
            if (max == res[i])
                count += 1;
        }
        return count * max;
    }
};
