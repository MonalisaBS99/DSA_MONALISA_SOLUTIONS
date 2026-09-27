bool comp(pair<int,int>a,pair<int,int>b)
{
    if(a.second>b.second)return true;
    return false;

}
class Solution {
public:
    int sumHighestAndLowestFrequency(vector<int>& nums) {
  unordered_map<int,int>mp;
  for(int i:nums)
  mp[i]++;
  int sum=0;
  vector<pair<int,int>>sums(mp.begin(),mp.end());
  sort(sums.begin(),sums.end(),comp);
  sum=sums[0].second+sums[sums.size()-1].second;
  return sum;
    }
};
