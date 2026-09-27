#include <bits/stdc++.h>
using namespace std;
bool even(int n)
{
    return (n%2==0);
}
int main() {
    // Your code goes here
    int n;
    cin>>n;
  bool ans;
ans=even(n);
if(ans==true)
cout<<"Even";
else
cout<<"Odd";
    
}
