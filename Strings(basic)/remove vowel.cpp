class Solution {
  public:
    string removeVowels(string& s) {
        // code here
        string res;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                continue;
            }
            res.push_back(s[i]);
        }
        return res;
    }
};
