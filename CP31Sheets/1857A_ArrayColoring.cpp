#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int countOdd = 0;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            if (num % 2 != 0)
                countOdd++;
        }
        if (countOdd % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}