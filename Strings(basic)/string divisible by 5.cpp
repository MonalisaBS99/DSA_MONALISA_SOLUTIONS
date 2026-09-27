class Solution {
  public:
    bool divisibleBy5(string &n) {
        // code here
        int num=n[n.size()-1]-'0';
        return(num==0||num==5);
    }
};
