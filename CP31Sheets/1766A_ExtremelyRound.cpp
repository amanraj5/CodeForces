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
        string temp = to_string(n);
        cout << 9 * (temp.size() - 1) + temp[0] - '0' << endl;
    }
    return 0;
}