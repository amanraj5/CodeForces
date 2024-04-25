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
        int ans = n;
        for (right = n - 1; right > 0; right--)
        {
            for (left = right - 1; left >= 0; left--)
            {
                temp+=s[left];
                temp+=s[right];
                if (temp == "00" || temp == "25" || temp == "50" || temp == "75")
                {
                    ans=min(ans,(n - right - 1) + (right - left - 1));
                }
                temp = "";
            }
        }

        cout << ans << endl;
    }
    return 0;
}