#include <bits/stdc++.h>
using namespace std;

bool isOdd(int num)
{
    return num % 2 == 1;
}

bool isEven(int num)
{
    return num % 2 == 0;
}

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

        int evenCnt = 0, oddCnt = 0;
        int i = 0;
        int ans = 0;
        while (i < n)
        {
            while (i < n && isOdd(v[i]))
            {
                oddCnt++;
                i++;
            }
            while (i < n && isEven(v[i]))
            {
                evenCnt++;
                i++;
            }

            if (evenCnt > 1)
            {
                ans += (evenCnt - 1) ;
            }
            if (oddCnt > 1)
            {
                ans += (oddCnt - 1) ;
            }
            evenCnt = 0;
            oddCnt = 0;
        }
        cout << ans << endl;
    }
    return 0;
}