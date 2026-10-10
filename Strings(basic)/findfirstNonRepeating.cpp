class Solution {
  public:
    char nonRepeatingChar(string &s) {
        //  code here
        unordered_map<char,int> freq;
        for(char ch:s)
        freq[ch]++;
        for(auto i:s)
        {
            if(freq[i]==1)
            return i;
        }
        return '$';
    }
};
