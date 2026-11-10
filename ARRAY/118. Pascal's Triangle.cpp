vector<int> printP(int c)
{
    int ans=1;
    vector<int>res;
    res.push_back(1);
    for(int i=1;i<c;i++)
    {
        ans=ans*(c-i);
        ans=ans/i;
        res.push_back(ans);
    }
    return res;
}
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int c,r;
        c=r=numRows;
        vector<vector<int>>res1;
        for(int i=1;i<=r;i++)
        {
         res1.push_back(printP(i));
            
        }
        return res1;

    }
};
