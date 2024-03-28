#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> left(n);
        vector<int> right(m);
        for (int i = 0; i < n; i++)
            cin >> left[i];

        for (int i = 0; i < m; i++)
            cin >> right[i];

        sort(left.begin(), left.end());
        sort(right.begin(), right.end());
        int coins = 0;
        for (int i = 0; i < n; i++)
        {
            int temp = 0;
            for (int j = 0; j < m; j++)
            {
                if ((left[i] + right[j]) <= k)
                {
                    temp++;
                }
                else break;
            }
            coins += temp;
        }
        cout << coins << endl;
    }
    return 0;
}