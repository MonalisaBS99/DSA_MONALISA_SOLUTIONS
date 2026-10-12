#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t, n, k;
    cin >> t;
    int arr[100];

    while (t--)
    {
        int sum = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
                vector < int > arr1(n);
        for (int i = 0; i < n; i++)
        {
            arr1[i] = arr[i];
        }
         
        sort(arr1.begin(), arr1.end(),greater<int>());
        for (int i = 0; i < k; i++)
        {
            sum += arr1[i];
        }
        cout << sum<<endl;

    }

}
