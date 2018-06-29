#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,d;
    cin>>n>>d;
    int *a =NULL;
    a = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> a[(n+i-d)%n];
    }
    for (int i = 0; i < n; i++) {
        cout<<a[i]<<" ";
    }

    return 0;
}