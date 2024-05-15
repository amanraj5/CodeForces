#include <bits/stdc++.h>
using namespace std;

bool comp(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.first == b.first)
    {
        return a.second < b.second;
    }
    return a.first > b.first;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> pq(n);
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            num %= k;
            if (num == 0)
                pq[i] = {k, i};
            else
                pq[i] = {num, i};
        }
        sort(begin(pq), end(pq), comp);
        for (auto &num : pq)
        {
            cout << num.second + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}