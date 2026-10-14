bool isPerSq(long long x)
{
    long long s=sqrt(x);
    return s*s==x;
}
class Solution {
  public:
    bool isFibonacci(int n) {
        // code here
        long long val1=5*n*n+4;
        long long val2=5*n*n-4;
        return isPerSq(val1)||isPerSq(val2);
    }
};
