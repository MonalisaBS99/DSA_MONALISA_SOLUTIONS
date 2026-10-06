class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
        int secondLar=INT_MIN;
       
        int largest=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(largest<nums[i]&&largest!=nums[i])
            {
                secondLar=largest;
                largest=nums[i];
            }
            else
            if(secondLar<nums[i]&&largest>nums[i])
            {
                secondLar=nums[i];
            }
        }
      if(secondLar>INT_MIN)
      return secondLar;
      return -1;
      
    }
};
