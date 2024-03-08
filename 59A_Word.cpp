#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int lower = 0, upper = 0;
    for (char c : s)
    {
        if (islower(c))
            lower++;
        else
            upper++;
    }
    string ans = "";

    if (upper > lower)
    {
        for (char c : s)
            ans += toupper(c);
    }
    else
    {
        for (char c : s)
            ans += tolower(c);
    }
    cout << ans;
    return 0;
}