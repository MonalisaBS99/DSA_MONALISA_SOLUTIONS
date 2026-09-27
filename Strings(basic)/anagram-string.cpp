class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mpp;
         unordered_map<char,int>mpp1;
         for(char sh:s)
         mpp[sh]++;
         for(char sh:t)
         mpp1[sh]++;
        return(mpp==mpp1);


    }
};
