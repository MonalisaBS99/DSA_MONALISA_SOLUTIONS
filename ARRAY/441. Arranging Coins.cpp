class Solution {
public:
    int arrangeCoins(int n) {
        int i=1;
        int res=0;
        while(n>=i)
        {
            n=n-i;
            res+=1;
            i+=1;
        }
        return res;
    }
};
