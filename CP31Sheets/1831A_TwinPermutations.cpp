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
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            cout << n + 1 - num << " ";
        }
        cout << endl;
    }
    return 0;
}