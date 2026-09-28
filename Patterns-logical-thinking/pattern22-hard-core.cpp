int minii(int a,int b,int c,int d)
{
vector<int>ls{a,b,c,d};
int minu=*min_element(ls.begin(),ls.end());
return minu;
}
#include<vector>
class Solution {
public:
    void pattern22(int n) {
 int size=(2*n)-1;
 int i,j;
 for( i=0;i<size;i++)
 {
    for(j=0;j<size;j++)
    {
        int mini=minii(i,j,size-1-i,size-1-j);
        cout<<n-mini<<" ";

    }
    cout<<endl;
 }

    }
};
