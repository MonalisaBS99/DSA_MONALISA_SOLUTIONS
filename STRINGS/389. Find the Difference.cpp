class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int i=0;
        int j=0;
        int n1=s.size();
        int n2 =t.size();
        while(i<n1&&j<n2)
        {
            if(s[i]==t[j])
            {
                i++;j++;
            }
            else
            break;
        }
        return t[j];
    }
};
