class Solution {
public:
    void pattern9(int n) {
int i,j;
for(i=0;i<n;i++)//outer loop
{
    for(j=0;j<n-i-1;j++)//space
    cout<<" ";
    for(j=0;j<(2*i)+1;j++)//star
    cout<<"*";
   
cout<<endl;//after each line go to next line
}
    
for(i=0;i<n;i++)//outer loop
{
    for(j=0;j<i;j++)//space
    cout<<" ";
    for(j=0;j<2*(n-i-1)+1;j++)//star
    cout<<"*";
   
cout<<endl;//after each line go to next line
}

    }
};
