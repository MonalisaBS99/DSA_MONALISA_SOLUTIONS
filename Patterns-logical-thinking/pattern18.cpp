class Solution {
public:
    void pattern18(int n) {
for(int i=0;i<n;i++)
{
int ch=65+n-i-1;
    for(int j=0;j<=i;j++){
    cout<<char(ch)<<" ";
    ch=ch+1;
    }
    cout<<endl;
    }
    }
};
