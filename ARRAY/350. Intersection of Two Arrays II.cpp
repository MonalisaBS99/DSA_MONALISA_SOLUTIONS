class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>cnt;
        vector<int>res;
        int n1=nums1.size();
        int n2=nums2.size();
        int m=max(n1,n2);
        if(n1<n2)
        {
            for(int i:nums1)
            cnt[i]++;
        }
        else
        {
            for(int i:nums2)
            cnt[i]++;
        }
       if(m==n1)
       {
        for(int i=0;i<n1;i++)
        {
            if(cnt.count(nums1[i]))
            {
                cnt[nums1[i]]--;
                if(cnt[nums1[i]]==0)
                {
                    cnt.erase(nums1[i]);
                }
                res.push_back(nums1[i]);
            }
        }
       }
       else{
       for(int i=0;i<n2;i++)
        {
            if(cnt.count(nums2[i]))
            {
                cnt[nums2[i]]--;
                if(cnt[nums2[i]]==0)
                {
                    cnt.erase(nums2[i]);
                }
                res.push_back(nums2[i]);
            }
        }
       }
return res;

    }
};
