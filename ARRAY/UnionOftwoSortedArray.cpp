class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        int n1=a.size();
        int n2=b.size();
        int i,j;
        i=j=0;
        
        vector<int>unionans;
        while(i<n1&&j<n2)
        {
            if(a[i]<b[j])
            {
                if(unionans.size()==0||unionans.back()!=a[i])
                {
                    unionans.push_back(a[i]);
                    
                }
                i++;
            }
            else
            {
            if(unionans.size()==0||unionans.back()!=b[j])
                {
                    unionans.push_back(b[j]);
                    
                }
                j++;
            }
                
        }
        while(i<n1)
        {
            
           
                if(unionans.back()!=a[i]||unionans.size()==0)
                {
                    unionans.push_back(a[i]);
                    
                }
                i++;
        }
        
        while(j<n2)
      {
             if(unionans.back()!=b[j]||unionans.size()==0)
                {
                    unionans.push_back(b[j]);
                    
                }
                j++;
        
        }
        return unionans;
    }
};
