class Solution {
public:
    void pattern19(int n) {
int i,j;
for(i=0;i<n;i++)
{
    for(int j=0;j<n-i;j++)//stars
    cout<<"*";
    for(int j=0;j<2*i;j++)
    cout<<" ";
  for(int j=0;j<n-i;j++)//stars
    cout<<"*";
    cout<<endl;

}
for(int i=0;i<n;i++)
{
    for(j=0;j<=i;j++)
    cout<<"*";
    for(j=0;j<2*(n-i-1);j++)
    cout<<" ";
     for(j=0;j<=i;j++)
    cout<<"*";
    cout<<endl;
}
    }
};
