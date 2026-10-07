class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currentcount=0;//for current counter
        int maxcount=0;//for maximum out of all 
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                currentcount+=1;
                  maxcount=max(currentcount,maxcount);//stores maximum
            }
            else
            {
              
                currentcount=0;//if 0 encounters
            }
        }
        return maxcount;
    }
};
