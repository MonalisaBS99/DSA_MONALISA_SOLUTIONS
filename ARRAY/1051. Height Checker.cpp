class Solution {
public:
    int heightChecker(vector<int>& heights) {
    vector<int>res(heights.begin(),heights.end());
    sort(res.begin(),res.end());
    int cnt=0;
    for(int i=0;i<res.size();i++)
    {
        if(heights[i]!=res[i])
        cnt++;
    }
    return cnt;
    }
};
