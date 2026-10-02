class Solution{	
public:		
    string largeOddNum(string& s){
        //your code goes here
        int first=s.find_first_not_of('0');
       
        if (first == string::npos) {
            return ""; 
        }
            s=s.substr(first);
        int n=s.size();
        string res;
        int i=n-1;
        for(i=n-1;i>=0;i--)
        {
            if((s[i]-'0')%2==1){
              return s.substr(0,i+1);
        }
        }
      
    return "";
    }
};
