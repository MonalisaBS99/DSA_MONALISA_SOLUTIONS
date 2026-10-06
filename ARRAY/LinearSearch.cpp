class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        //your code goes here
        int i;
        int index=-1;
        for(i=0;i<nums.size();i++)
        {
            if(target==nums[i])
            {
                index=i;break;
            }

        }
        return index;
    }
};
