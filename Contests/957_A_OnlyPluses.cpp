#include <bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(), arr.end()
typedef long long ll;
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int arr[3] = {a, b, c};
    int i = 0;
    while (i < 5)
    {
        sort(arr, arr + 3);
        arr[0] = arr[0] + 1;
        i++;
    }
    cout << arr[0] * arr[1] * arr[2] << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}