class Solution {
public:
    void pattern20(int n) {
        int i,j;
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
for(i=0;i<n-1;i++)
{
    for(int j=0;j<n-i-1;j++)//stars
    cout<<"*";
    for(int j=0;j<2+(2*i);j++)
    cout<<" ";
  for(int j=0;j<n-i-1;j++)//stars
    cout<<"*";
    cout<<endl;

}
    }
};
