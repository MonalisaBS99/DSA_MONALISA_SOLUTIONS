class Solution {
public:
    void pattern10(int n) {
int i,j;//loop variables
for(i=1;i<=n;i++)//first half
{
    for(j=1;j<=i;j++)
    {
        cout<<"*";
    }
    cout<<endl;
}
for(i=n-1;i>=1;i--)//second half
{
    for(j=1;j<=i;j++)
    cout<<"*";
    cout<<endl;
}
    }
};
