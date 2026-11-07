class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int>mp;
        vector<int>res;
        
        for(int i=0;i<numbers.size();i++)
        {
            int v=target-numbers[i];
            if(mp.count(v))
            { res.push_back(mp[v]+1);
                res.push_back(i+1);
               
                return res;
            }
            mp[numbers[i]]=i;

        }
        return res;
    }
};
