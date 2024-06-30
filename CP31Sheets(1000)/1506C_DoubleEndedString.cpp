#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int len = 0;
        for (int i = 0; i < a.size(); i++)
        {
            string temp = "";
            for (int j = i; j < a.size(); j++)
            {
                temp += a[j];
                if (b.find(temp) != string::npos)
                {
                    if (temp.size() > len)
                        len = temp.size();
                }
            }
        }
        cout << (a.size() + b.size() - 2 * len) << endl;
    }
    return 0;
}