long long fact(long long n)
{
    if(n==0||n==1)return 1;
    return n*fact(n-1);
}
class Solution {
  public:
    vector<long long> factorialNumbers(long long n) {
        // Write Your Code here
        vector<long long>ans;
        long long res;
        for(int i=1;i<=n;i++)
        {
            res=fact(i);
            if(res>n)
            {
                break;
            }
            else
            {
                ans.push_back(res);
            }
        }
        return ans;
    }
};
