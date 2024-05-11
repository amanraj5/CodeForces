#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int cnt = 1;
        bool flag = false;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i - 1] != s[i])
                cnt++;
            if (s[i - 1] == '0' && s[i] == '1')
                flag = true;
        }

        cout << cnt - flag << endl;
    }
    return 0;
}