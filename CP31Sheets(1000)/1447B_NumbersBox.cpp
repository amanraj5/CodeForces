#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        int neg = 0, sum = 0, minVal = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int num = arr[i][j];
                sum += abs(num);
                if (num < 0)
                {
                    neg++;
                }
                minVal = min(minVal, abs(num));
            }
        }
        if (neg % 2 == 1)
        {
            cout << sum - 2 * minVal << endl;
        }
        else
        {
            cout << sum << endl;
        }
    }
    return 0;
}