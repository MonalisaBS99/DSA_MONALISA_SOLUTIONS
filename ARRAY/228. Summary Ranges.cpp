class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {

        int t = 1;
        int s;
        int e;
        vector<string> res;
        int i = 0;
        int j = 0;
        while (i < nums.size()) {
            s = nums[i];
            e = nums[i];
            j = i + 1;
            while (t) {
                if (j < nums.size() && nums[j] == nums[j - 1] + 1) {
                    e = nums[j];
                    j++;

                } else
                    t = 0;
            }
            i = j;
            t = 1;
            if (s == e)
                res.push_back(to_string(s));
            else
                res.push_back(to_string(s) + "->" + to_string(e));
        }
        return res;
    }
};
