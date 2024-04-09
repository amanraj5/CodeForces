#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long num;
        cin >> num;
        string s = to_string(num);
        int n = s.size();
        int right;
        int left;
        string temp = "";
        bool ans = false;
        for (right = n - 1; right > 0; right--)
        {
            for (left = right - 1; left >= 0; left--)
            {
                temp.push_back(s[left]);
                temp.push_back(s[right]);
                if (temp == "00" || temp == "25" || temp == "50" || temp == "75")
                {
                    ans = true;
                    break;
                }
                temp = "";
            }
            if (ans)
                break;
        }

        cout << (n - right - 1) + (right - left - 1) << endl;
    }
    return 0;
}