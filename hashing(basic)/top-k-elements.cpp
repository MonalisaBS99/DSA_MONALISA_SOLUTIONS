bool comp(pair<int,int>p1,pair<int,int>p2)
{
    if(p1.second>p2.second)return true;
    if(p1.second==p2.second)
    {
        if(p1.first<p2.first)return true;
    }
    return false;
}
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i:nums)
        mp[i]++;
        vector<pair<int,int>>res(mp.begin(),mp.end());
        sort(res.begin(),res.end(),comp);
        vector<int>ress1;
        for(int i=0;i<k;i++)
        {
            ress1.push_back(res[i].first);
        }
        return ress1;
    }
};
