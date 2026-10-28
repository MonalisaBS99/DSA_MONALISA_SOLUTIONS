#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t,n;
cin>>t;
string s;
while(t--)
{
    cin>>n;
    cin>>s;
    int c=0;
    int la=0;
    int lb=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A'&&la<3)
        {
        la++;
        lb=0;
        }
        if(s[i]=='B'&&lb<3)
        {
            lb++;
            la=0;
        }
        if(la==3)
        {
            la=0;
            c++;
        }
        if(lb==3)
        {
            lb=0;
            c++;
        }
    }
    cout<<c<<endl;
}
}
