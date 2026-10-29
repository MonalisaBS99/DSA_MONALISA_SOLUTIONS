class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i:arr)
        mp[i]++;
   int t;
   unordered_set<int>v;
   for(auto it:mp)
   {
    t=it.second;
    if(v.find(t)!=v.end())
    return false;
    v.insert(t);

   }
   return true;
    }
};
