void print(vector<int>&res,int n)
{
    res.push_back(n);//pushing number while going (forward recursion)
    if(n>0)
    print(res,n-5);//recursive call
    res.push_back(n);//pushing number while coming back(backtracking)
}
class Solution {
  public:
    vector<int> pattern(int n) {
        // code here
        vector<int>res;
        if(n<0)
        res.push_back(n);//to handle negative numbers
        else
        print(res,n);
        return res;
        
    }
};
