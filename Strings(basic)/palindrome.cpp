class Solution {
public:
    bool isPalindrome(string s) {
        bool status = true;
        
        int i = 0, j, n; 
        n = s.size();
        j = n - 1;
        
        
        for(; i < n; ) 
        {
            if(i >= j) break;
            
           
            if(!isalnum(s[i])) {
                i++;
                continue; 
            }
                      if(!isalnum(s[j])) {
                j--;
                continue; 
            }

          
            if(tolower(s[i]) != tolower(s[j])) {
                status = false;
                break; 
            }
            
         
            i++;
            j--;
        }
        return (status);
    }
};
