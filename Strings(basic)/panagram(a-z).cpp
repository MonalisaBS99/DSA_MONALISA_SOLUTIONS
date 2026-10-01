class Solution {
  public:
    bool checkPangram(string& s) {
        //  code here
        int n=s.size();int i;
       int arr[26]={0};
       for(i=0;i<n;i++)
       s[i]=tolower(s[i]);
     for(i=0;i<n;i++)
     arr[s[i]-'a']+=1;
    for(i=0;i<26;i++)
    {
        if(arr[i]==0)
        return false;
    }
       return true;
    }
};
