class Solution {
  public:
    int sumOfNaturals(int n) {
        // code here
        if(n==1)
        return 1;
     return n+sumOfNaturals(n-1);//recusrive call
    }
};
