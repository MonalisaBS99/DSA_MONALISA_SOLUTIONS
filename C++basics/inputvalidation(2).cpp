#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code goes here
    int n;
    if(cin>>n)
    {if (cin.peek() != '\n' && cin.peek() != EOF && cin.peek() != ' ') {
            cout << "Invalid" << endl;
            }
            else
        if(n>=-100&&n<=100)
        {
            cout<<"Valid";
        }
        else
        {
            cout<<"Invalid";
        }
    }
    else
    cout<<"Invalid";
}
