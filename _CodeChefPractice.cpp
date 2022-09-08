#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, x, y;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int ans;
        cin >> x >> y;
        ans = abs(x - y);
        cout << ans << endl;
    }
    return 0;
}