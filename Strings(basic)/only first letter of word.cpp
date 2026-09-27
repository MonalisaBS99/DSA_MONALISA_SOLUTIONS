class Solution {
  public:

    string firstAlphabet(string &s) {
        // code here
        string res;
        res.push_back(s[0]);
        int n=s.size();
        for(int i=1;i<n;i++)
        {
            if(s[i]==' '){
            res.push_back(s[i+1]);
            }
        }
        return res;
    }
};
