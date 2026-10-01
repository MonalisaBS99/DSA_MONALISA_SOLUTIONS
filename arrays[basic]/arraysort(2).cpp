class Solution{	
	public:
		bool isSorted(vector<int>& a){
			//your code goes here
            int count=0;
            int n=a.size();
            for(int i=0;i<n-1;i++)
            {
                if(a[i]>a[i+1])
                return false;

            }
            return true;
		}
};
