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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int twoCount = 0;
        for (int num : v)
        {
            if (num == 2)
                twoCount++;
        }
        int count = 0;
        if (twoCount % 2 != 0)
            cout << -1 << endl;
        else if (twoCount == 0)
            cout << 1 << endl;
        else
        {
            int i;
            for (i = 0; count < twoCount / 2; i++)
            {
                if (v[i] == 2)
                    count++;
            }
            cout << i << endl;
        }
    }
    return 0;
}