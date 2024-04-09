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
        int j;
        int ansI = -1, ansK = -1;
        bool p1 = false, p2 = false;
        for (j = 1; j < n - 1; j++)
        {
            int i = 0, k = n - 1;
            while (i < j)
            {
                if (v[i] < v[j])
                {
                    ansI = i;
                    p1 = true;
                    break;
                }
                i++;
            }
            while (k > j)
            {
                if (v[j] > v[k])
                {
                    ansK = k;
                    p2 = true;
                    break;
                }

                k--;
            }
            if (p1 && p2)
                break;
            p1 = false;
            p2 = false;
        }
        if (p1 && p2)
        {
            cout << "YES\n";
            cout << ansI + 1 << " " << j + 1 << " " << ansK + 1 << endl;
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}