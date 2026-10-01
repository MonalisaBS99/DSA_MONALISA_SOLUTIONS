class Solution{	
	public:
		bool isSorted(vector<int>& a){
			//your code goes here
            int count=0;
            int n=a.size();
            for(int i=0;i<n-1;i++)
            {
                if(a[i+1]<a[i])count+=1;

            }
            if(a[n-1]>a[0])count+=1;
            if(count<=1)
            return false;
            return true;
		}
};
