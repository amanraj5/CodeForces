#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool check(ll n)
{
    ll num = n;
    while (num != 0)
    {
        int rem = num % 10;
        if (rem != 0 && n % rem != 0)
            return false;
        num /= 10;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        while (!check(n))
            n += 1;
        cout << n << "\n";
    }

    return 0;
}