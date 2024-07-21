#include <bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(), arr.end()
typedef long long ll;

int N = 3e5 + 5;
vector<int> xors(N, 0);
void solve()
{
    int a, b;
    cin >> a >> b;
    int x = xors[a - 1];
    int minLen = a;
    if (x != b)
    {
        int req = x ^ b;
        if (req == a)
        {
            cout << minLen + 2 << endl;
        }
        else
        {
            cout << minLen + 1 << endl;
        }
    }
    else
    {
        cout << minLen << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i < N; i++)
    {
        xors[i] = xors[i - 1] ^ i;
    }
    while (t--)
        solve();
    return 0;
}