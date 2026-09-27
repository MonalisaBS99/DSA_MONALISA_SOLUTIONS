class Solution {
  public:
    string convert(string& s) {
        // code here
        string res;
        res.push_back(toupper(s[0]));
        for(int i=1;i<s.size();i++)
        { 
            if(s[i]==' '){
                res.push_back(s[i]);
            res.push_back(toupper(s[i+1]));
            i++;
            }
            else
            res.push_back(s[i]);
           
        }
        return res;
    }
};
