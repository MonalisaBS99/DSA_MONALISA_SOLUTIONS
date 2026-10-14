class Solution {
public:
    void twoSum(vector<int>& nums, int target) { int left=0;
    vector<int>ans;
    sort(nums.begin(),nums.end());
    int right=nums.size()-1;
    while(left<right)
    {
        int sum=nums[left]+nums[right];
        if(target==sum)
        {
            cout<<"yes";
        }
        else
        if(sum<target)
        left++;
        else
        right++;
    }
       cout<<"no";
    }
};
