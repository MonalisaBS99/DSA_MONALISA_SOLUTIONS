bool prime(int n,int i)
{
    if(n<=1)return false;
    if(n==2)return true;
    if(n%i==0)return false;
    
    if(i*i>n||n==2)return true;
return prime(n,i+1);
}
class Solution{	
	public:
		bool checkPrime(int num){
			//your code goes here
           return prime(num,2);
		}
};
