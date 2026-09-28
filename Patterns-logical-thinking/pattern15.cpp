class Solution {
public:
    void pattern15(int n) {
char ch='A';
for(int i=n;i>=1;i--)
{
    for(char j=ch;j<ch+i;j++)
    cout<<j;
    cout<<endl;
}
    }
};
