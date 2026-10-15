class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int ,int>mp;
        for(auto i:nums)
        mp[i]++;
        int largest=0;
        for(auto it:mp)
        largest=max(largest,it.second);
        int c=0;
        for(auto it:mp)
        {
            if(largest==it.second)
            c+=it.second;
        }
        return c;
    }
};
