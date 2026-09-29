int sumofN(int n)//recursive function
{
    if(n==1)
    return 1;
return n+sumofN(n-1);//recusive call

}
class Solution{	
	public:
		int NnumbersSum(int n){
			//your code goes here
     return sumofN(n);
            //function call
            
		}
};
