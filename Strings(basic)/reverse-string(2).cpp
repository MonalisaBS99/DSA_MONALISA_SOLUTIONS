class Solution {
public:
    void reverseString(vector<char>& s) {
        int j=s.size()-1;
    for(int i=0;i<=s.size()/2;i++)
    { 
        if(i>=j)break;
            int temp;
        temp=s[i];
    
            s[i]=s[j];
            s[j]=temp;
            j--;
        }
    

    }
};
