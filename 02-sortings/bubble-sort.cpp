void swapp(int &a,int &b)
{
    int temp;
    temp=a;a=b;b=temp;
}
class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {

int n=nums.size();
for(int i=n-1;i>=1;i--)
{
    for(int j=0;j<=i-1;j++)
    {
        if(nums[j]>nums[j+1])
        swapp(nums[j],nums[j+1]);
    }
}
return nums;
    }
};
