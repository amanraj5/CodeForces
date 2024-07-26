#include <bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(), arr.end()
typedef long long ll;


// Not Solved
void solve()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    if (s == t)
    {
        cout << "YES\n";
        return;
    }
    if (n == 1)
    {
        cout << "NO\n";
        return;
    }
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0' && t[i] == '1')
        {
            if(!flag){
                cout<<"NO\n";
                return;
            }
        }
        if(s[i]=='1')
            flag++;
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