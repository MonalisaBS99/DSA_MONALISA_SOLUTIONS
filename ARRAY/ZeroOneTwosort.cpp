class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0;
        int one = 0;
        int two = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                zero++;
            if (nums[i] == 1)
                one++;
            if (nums[i] == 2)
                two++;
        }
        nums.clear();
        for (int i = 0; i < zero; i++)
            nums.push_back(0);
        for (int i = zero; i < zero + one; i++)
            nums.push_back(1);
        for (int i = zero + one; i < zero + one + two; i++)
            nums.push_back(2);
    }
};
