class Solution {
  public:
    string removeSpaces(string& s) {
        // code here
        string res;//result array
        int n=s.size();//size of string
        for(int i=0;i<n;i++)
        {
            if(isalnum(s[i]))//checks only for alphabets and numbers
            res.push_back(s[i]);//if true push to the result
        }
        return res;//return the result
    }
};
