class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>v;
        vector<int>res;
        set<int>p;
        for(int i:nums1)
        v[i]++;
        for(int i=0;i<nums2.size();i++)
        {
            if(v[nums2[i]]>0&&p.find(nums2[i])==p.end())
            {
                res.push_back(nums2[i]);
                p.insert(nums2[i]);
            }
            
        }
        return res;
    }
};
