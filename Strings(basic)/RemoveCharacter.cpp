
class Solution {
  public:
    // Function to remove all occurrences of the character from the string
    void removeCharacter(string &s, char c) {
        // code here
        string s1;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]==c)
            continue;
            s1.push_back(s[i]);
        }
        s=s1;
        
    }
};
