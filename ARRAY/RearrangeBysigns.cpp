class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos=0;
        int neg=1;    int n=nums.size();
        vector<int>res(n,0);
    
        for(int i=0;i<n;i++)
        {
            if(nums[i]<0)
            {
                
                res[neg]=nums[i];
                  neg+=2;
            }
            else
            {
                
                res[pos]=nums[i];
                pos+=2;
            }
        }
        return res;
    }
};
