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
        vector<int> temp;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            if (num >= 10)
            {
                temp.push_back(num / 10);
                temp.push_back(num % 10);
            }
            else
            {
                temp.push_back(num);
            }
        }
        bool ans = true;
        for (int i = 1; i < temp.size(); i++)
        {
            if (temp[i] < temp[i - 1])
            {
                ans = false;
                break;
            }
        }
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}