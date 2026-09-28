class Solution {
public:
    void pattern17(int n) {
int len=(2*n)-1;
char ch='A';
for(int i=0;i<n;i++)
{char ch='A';
    for(int j=0;j<n-i-1;j++)//space
    cout<<" ";
    for(int j=0;j<=i;j++)//firsthalf
    cout<<char(ch+j);
    for(int j=i-1;j>=0;j--){
     
    cout<<char(ch+j);

}
cout<<endl;
    }
    }
};
