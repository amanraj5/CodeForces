#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll minTyre;
        ll maxTyre;
        if (n % 6 == 0)
            minTyre = n / 6;
        else if (n % 6 >= 2)
            minTyre = n / 6 + 1;
        else if (n == 4)

            minTyre = 1;

        maxTyre = n / 4;

        if (n % 2 == 1 || n < 4)
            cout << -1 << endl;
        else
            cout << minTyre << " " << maxTyre << endl;
    }
    return 0;
}