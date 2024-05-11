#include <bits/stdc++.h>
using namespace std;
const int num = 100007;

vector<int> helper(vector<int> &v)
{
    for (int i = 1; i < num; i++)
    {
        int temp = i;
        bool isBinary = true;
        while (temp > 0)
        {
            int rem = temp % 10;
            if (rem > 1)
            {
                isBinary = false;
                break;
            }
            temp /= 10;
        }
        if (isBinary)
            v.push_back(i);
    }
    return v;
}
int main()
{
    int t;
    cin >> t;
    vector<int> binaryNumber;
    helper(binaryNumber);
    while (t--)
    {
        int n;
        cin >> n;
        bool ans = false;
        for (int i = 0; i < binaryNumber.size() - 1; i++)
        {
            int num1 = binaryNumber[i];
            for (int j = i + 1; j < binaryNumber.size(); j++)
            {
                int num2 = binaryNumber[j];
                if (num1 * num2 == n)
                {
                    ans = true;
                    break;
                }
            }
            if (ans)
                break;
        }
        if (ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}