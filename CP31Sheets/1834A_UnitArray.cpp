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
        vector<int> v(n);
        int negCount = 0;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            if (num == -1)
                negCount++;
        }
        int ans = 0;
        int posCount = n - negCount;
        while (!((posCount - negCount) >= 0 && negCount % 2 == 0))
        {
            posCount++;
            negCount--;
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}