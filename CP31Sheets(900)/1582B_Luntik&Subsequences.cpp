#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int oneCount = 0, zroCount = 0;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            if (num == 0)
                zroCount++;
            else if (num == 1)
                oneCount++;
        }
        cout << (1ll << zroCount) * oneCount << endl;
    }
    return 0;
}