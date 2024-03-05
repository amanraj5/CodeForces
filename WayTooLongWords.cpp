#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    while (n--)
    {
        cin >> s;
        int n = s.size();
        if (n <= 10)
            cout << s << endl;
        else
        {

            cout << s[0] << s.size() - 2 << s[n - 1] << endl;
        }
    }
    return 0;
}