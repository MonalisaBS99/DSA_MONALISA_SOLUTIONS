class Solution {
public:
    void pattern14(int n) {
char ch='A';
for(int i=0;i<n;i++)
{
    for(char j=ch;j<=ch+i;j++)
    cout<<j;
    cout<<endl;
}
    }
};
