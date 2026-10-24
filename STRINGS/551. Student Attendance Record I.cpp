class Solution {
public:
    bool checkRecord(string s) {
        int late=0;
        int abs=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A'){
                abs++;
                late=0;
            }
            else
            if(s[i]=='L')
            late++;
            else
            late=0;
            if(abs>=2||late>=3)return false;
        }
        return true;
    }
};
