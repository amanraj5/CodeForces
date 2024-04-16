#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a > b)
            swap(a, b);
        if (a == b)
            cout << "0 0" << endl;
        else
        {
            ll excitement = abs(a - b);
            ll operation = a % excitement;
            operation = min(operation, excitement - operation);
            cout << excitement << " " << operation << endl;
        }
    }
    return 0;
}