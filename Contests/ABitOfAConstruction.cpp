#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n - 1; i++)
        {
            cout << "1 ";
        }
        cout << k - n + 1 << endl;
    }
    return 0;
}