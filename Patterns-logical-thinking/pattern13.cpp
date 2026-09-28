class Solution {
public:
    void pattern13(int n) {
int cnt=1;//counter of numbers
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
    {
        cout<<cnt++<<" ";
    }
    cout<<endl;
}
    }
};
