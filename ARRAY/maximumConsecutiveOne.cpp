class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currentcount=0;
        int maxcount=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                currentcount+=1;
                  maxcount=max(currentcount,maxcount);
            }
            else
            {
              
                currentcount=0;
            }
        }
        return maxcount;
    }
};
