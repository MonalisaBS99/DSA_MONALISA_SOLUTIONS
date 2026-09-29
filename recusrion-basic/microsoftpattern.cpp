void print(vector<int>&res,int n)
{
    res.push_back(n);
    if(n>0)
    print(res,n-5);
    res.push_back(n);
}
class Solution {
  public:
    vector<int> pattern(int n) {
        // code here
        vector<int>res;
        if(n<0)
        res.push_back(n);
        else
        print(res,n);
        return res;
        
    }
};
