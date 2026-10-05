class Solution {
  public:
    int digitalRoot(int n) {
        // code here
        return (n%9==0?9:n%9);
    }
};
