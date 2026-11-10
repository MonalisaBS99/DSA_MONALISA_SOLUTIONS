class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>res;
        long long ans=1;
        int r=rowIndex;
        int c=r;
        res.push_back(1);
        for(int i=1;i<=c;i++)
        {
            ans=(ans)*(r-i+1)/(i);
            res.push_back(ans);
        }
        return res;
        
    }
};
