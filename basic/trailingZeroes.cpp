class Solution {
  public:
    int trailingZeroes(int n) {
        // code here
        int count=0;
        while(n>=5)
        {
            n/=5;
            count+=n;
        }
        return count;
    }
};
