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
        int start = 0, end = n - 1;
        while (start < end)
        {
            if ((s[start] == '0' && s[end] == '1') || ((s[start] == '1' && s[end] == '0')))
            {
                start++;
                end--;
            }

            else
                break;
        }
        cout << end - start + 1 << endl;
    }
    return 0;
}