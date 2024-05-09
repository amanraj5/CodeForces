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
        int one = 0, zro = 0;
        for (char c : s)
        {
            if (c == '1')
                one++;
            else
                zro++;
        }
        string temp = "";
        for (char c : s)
        {
            if (c == '0' && one > 0)
                temp += '1', one--;
            else if (c == '1' && zro > 0)
                temp += '0', zro--;
            else
                break;
        }
        cout << s.size() - temp.size() << endl;
    }
    return 0;
}