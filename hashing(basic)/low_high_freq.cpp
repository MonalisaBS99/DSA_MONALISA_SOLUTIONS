bool comp(pair<int,int>p1,pair<int,int>p2)
{
    if(p1.second<p2.second)return true;
return false;
    
}
class Solution {
  public:
    int findDiff(vector<int>& arr) {
        // code here
        unordered_map<int,int>mp;
        for(int i:arr)
        mp[i]++;
    vector<pair<int,int>>res(mp.begin(),mp.end());
    sort(res.begin(),res.end(),comp);
    return res[res.size()-1].second-res[0].second;
    }
};
