#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code goes here
    int a,b,c;
    cin>>a>>b>>c;
    int max1;
    int max2;
    max1=a>b?a:b;
    max2=max1>c?max1:c;
    cout<<max2;
}
