class Solution {
  public:
    int middle(int a, int b, int c) {
        // code here
        vector<int>l;
        l.push_back(a);
        l.push_back(b);
        l.push_back(c);
        sort(l.begin(),l.end());
        return l[1];
    }
};
