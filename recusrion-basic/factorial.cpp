class Solution{	
	public:
		long long int factorial(int n){
			//your code goes here
            if(n==0||n==1)return 1;
            return n*factorial(n-1);
		}
};
