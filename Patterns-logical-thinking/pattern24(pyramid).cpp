#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // code here
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        cout<<" ";//space;
        for(int j=0;j<(2*i)+1;j++)
        cout<<"*";//stars
      
        cout<<endl;
    }

    return 0;
}
