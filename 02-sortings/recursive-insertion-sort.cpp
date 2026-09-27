void sortin(int i,vector<int>&nums)
{
    if(i==nums.size())
    return;
   int j=i;
    while(j>0&&nums[j-1]>nums[j]){
    swap(nums[j-1],nums[j]);
    j--;
    }
    sortin(i+1,nums);
}
class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
 sortin(0,nums);
        return nums;
    }
};
