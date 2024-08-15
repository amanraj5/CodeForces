#include <bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(), arr.end()
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool seats[n + 1] = {false};
    seats[arr[0]] = true;
    for (int i = 1; i < n; i++)
    {
        if ((arr[i] > 0 && seats[arr[i] - 1]) || (arr[i] < n && seats[arr[i] + 1]))
        {
            seats[arr[i]] = true;
            continue;
        }
        else
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}