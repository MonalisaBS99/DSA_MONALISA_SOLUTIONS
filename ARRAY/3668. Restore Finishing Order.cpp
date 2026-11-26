class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
         int n=order.size();
         int m=friends.size();
         unordered_map<int,int>mp;
         for(int i:friends)
         mp[i]++;
         vector<int> res;
         for(int i=0;i<n;i++)
         {
            if(mp.count(order[i])==1)
            res.push_back(order[i]);
         }
         return res;

    }
};
