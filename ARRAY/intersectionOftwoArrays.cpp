class Solution {
  public:
    vector<int> intersection(vector<int> &a, vector<int> &b) {
        // code here
        int i=0;int j=0;
        int n1=a.size();
        int n2=b.size();
        vector<int>in;
        set<int>s;
        while(i<n1&&j<n2)
        {
            if(a[i]<b[j])
            {
                i++;
                
            }
            else
            if(b[j]<a[i])
            {
                j++;
            }
            else
            {
            {
             s.insert(a[i]);
                i++;j++;
            }
            }
        }
        in.assign(s.begin(),s.end());
        return in;
    }
};
