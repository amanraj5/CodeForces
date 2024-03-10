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
        string s;
        cin >> s;
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (s.find("...") != string::npos)
            {
                cnt = 2;
                break;
            }
            else if (s[i] == '.')
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}