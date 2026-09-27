bool comp(pair<char,int>p1,pair<char,int>p2)
{
    if(p1.second>p2.second)return true;
    return false;
}
class Solution {
public:
    string frequencySort(string s) {
        string ress;
        unordered_map<char,int>mpp;
        for(char ch:s)
        {
            mpp[ch]++;
        }
        vector<pair<char,int>>res(mpp.begin(),mpp.end());
        sort(res.begin(),res.end(),comp);
        for(int i=0;i<res.size();i++)
        {
ress.append(res[i].second,res[i].first);
        }
        return ress;
    }
};
