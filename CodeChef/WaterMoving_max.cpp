#include <bits/stdc++.h>
using namespace std;
void solve()
{ int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int max=min(n,k+1);
    int res=0;
sort(arr.begin(),arr.end(),greater<int>());
for(int i=0;i<max;i++)
res+=arr[i];
cout<<res<<endl;
}
int main() {
	// your code goes here
int t;
cin>>t;
while(t--)
{
    solve();
}
}
