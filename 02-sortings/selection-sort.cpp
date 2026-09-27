void swapp(int &a,int &b)
{int temp;
temp=a;
a=b;
b=temp;
}
class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int min;
        int n=nums.size();
        for(int i=0;i<=n-2;i++)
        {min=i;
for(int j=i+1;j<n;j++)
{
    if(nums[min]>nums[j])
    min=j;
}
swapp(nums[min],nums[i]);
        }
return nums;
    }
};
