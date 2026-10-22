class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string>ans;
        vector<int>so(score.begin(),score.end());
        sort(so.begin(),so.end(),greater<int>());
        int n=score.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        mp[so[i]]=i;
        for(int i=0;i<n;i++)
        {
            if(mp[score[i]]==0)
            ans.push_back("Gold Medal");
            else
            if(mp[score[i]]==1)
            ans.push_back("Silver Medal");
            else
            if(mp[score[i]]==2)
            ans.push_back("Bronze Medal");
            else
            ans.push_back(to_string(mp[score[i]]+1));

        }
        return ans;

       
    }
};
