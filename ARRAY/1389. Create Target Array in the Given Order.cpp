
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> res;
        int j = 0;
        for (int i = 0; i < nums.size(); i++) {
            res.insert(res.begin() + index[j], nums[i]);
            j++;
        }
        return res;
    }
};
