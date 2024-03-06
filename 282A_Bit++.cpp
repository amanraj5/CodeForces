#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (auto it : v)
    {
        if (it == "++X" || it == "X++")
            ans++;
        else
            ans--;
    }
    cout << ans;
    return 0;
}