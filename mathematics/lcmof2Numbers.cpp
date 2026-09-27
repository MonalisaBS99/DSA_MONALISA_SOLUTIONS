class Solution {
public:
    int LCM(int n1,int n2) {
   return n1*n2/gcd(n1,n2);
    }
};
