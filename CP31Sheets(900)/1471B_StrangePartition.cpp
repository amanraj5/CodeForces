#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        long long minBeauty = 0, maxBeauty = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            sum += num;
            maxBeauty += num / x;
            if (num % x != 0)
                maxBeauty++;
        }
        if (sum % x != 0)
            minBeauty++;
        minBeauty += sum/x;
        cout << minBeauty << " " << maxBeauty << endl;
    }
    return 0;
}