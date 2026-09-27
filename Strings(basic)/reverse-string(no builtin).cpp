void rev(string &a,int i,int j)
{
    if(i>=j)return ;
    swap(a[i],a[j]);
    
    rev(a,i+1,j-1);
}
class Solution {
  public:
    string reverseString(string& s) {
        // code here
     rev(s,0,s.size()-1)  ; 
     return s;
    }
};
