class Solution {
public:
    int lengthOfLastWord(string s) {
        int i;
        int j=s.size()-1;
        int count=0;
        while(j>=0&&s[j]==' ')
        {
         
            j--;
        }
        while(j>=0&&s[j]!=' ')
        { count+=1;
            j--;
        }
        return count;
            }
};
