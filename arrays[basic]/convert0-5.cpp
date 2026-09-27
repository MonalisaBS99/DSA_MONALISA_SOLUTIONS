class Solution {
  public:
    int convertFive(int n) {
        // code here
        vector<int>m;
        int  num=0;
        if(n==0)
        return 5;
        else{
        while(n>0)
        {
             int rem=n%10;
             if(rem==0)
             m.push_back(5);
             else
             m.push_back(rem);
             n=n/10;
            }
            reverse(m.begin(),m.end());
            
            for(int i:m)
            {
                num=(num*10)+i;
            }
            
    }
    return num;
    }
};
