class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        deque<int>p;
        deque<int>o;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            p.push_back(nums[i]);
            else
            o.push_back(nums[i]);
        }
        sort(p.begin(),p.end());
        sort(o.begin(),o.end(),greater<int>());
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
            nums[i]=p.front();
            p.pop_front();
            }
            else
            {
            nums[i]=o.front();
            o.pop_front();
        }
        } 
        return nums;   
        }


};
