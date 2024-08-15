#include <bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(), arr.end()
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int m;
    cin >> m;

    while (m--)
    {
        bool ans = true;
        string s;
        cin >> s;
        if (s.length() != n)
        {
            cout << "NO\n";
        }
        else
        {
            unordered_map<ll, char> int_char;
            unordered_map<char, ll> char_int;
            for (int i = 0; i < n; i++)
            {
                if (int_char.find(arr[i]) == int_char.end() && char_int.find(s[i]) == char_int.end())
                {
                    int_char[arr[i]] = s[i];
                    char_int[s[i]] = arr[i];
                }
                else if (char_int[s[i]] != arr[i] || int_char[arr[i]] != s[i])
                {
                    ans = false;
                    break;
                }
            }
            if (ans)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}