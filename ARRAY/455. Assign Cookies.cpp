class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count=0;int i,j;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int n1=g.size();
        int n2=s.size();
        i=0;
        j=0;
        while(i<n1&&j<n2)
        {
            if(g[i]<=s[j])
            {
                count++;
                i++;j++;
            }
            else
            {
                j++;
            }

        }
        return count;
    }
};
