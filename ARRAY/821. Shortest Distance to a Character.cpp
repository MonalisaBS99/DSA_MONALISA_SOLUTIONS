class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>index;
        vector<int>res;
        for(int i=0;i<s.size();i++){
            if(s[i]==c)
            index.push_back(i);
        }
        for(int i=0;i<s.size();i++){
            int minD=INT_MAX;
            for(int j=0;j<index.size();j++)
            {
                if(minD>abs(i-index[j]))
                {
                    minD=abs(i-index[j]);
                }
            }
            res.push_back(minD);
        }
        return res;
    
    }
};
