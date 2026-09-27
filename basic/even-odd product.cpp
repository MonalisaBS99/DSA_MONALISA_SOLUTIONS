class Solution {
  public:
    bool isProductEven(vector<int> &arr) {
        // code here
        long long int prod=1;
        for(int i:arr)
        prod*=i;
        return(prod%2==0);
        
    }
};
