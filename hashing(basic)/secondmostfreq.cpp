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
    int secondMostFrequentElement(vector<int>& nums) {
    unordered_map<int,int>mp;
    for(int i:nums)
    mp[i]++;
    vector<pair<int,int>>res(mp.begin(),mp.end());
    sort(res.begin(),res.end(),comp);
    int high=res[0].second;
 
 int i=0;
    int ress=0;
    
    while (i < res.size() && res[i].second == high) {
    i++; 
}if(res.size()==i)
    return -1;

    
    ress=res[i].first;
    return ress;

    }
};
