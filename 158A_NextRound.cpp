#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int finisherScore = arr[k-1];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= finisherScore && arr[i] > 0)
            ans++;
        else
            break;
    }
    cout << ans;
    return 0;
}