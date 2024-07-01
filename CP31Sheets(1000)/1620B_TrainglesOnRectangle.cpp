#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        typedef long long ll;
        int w, h;
        cin >> w >> h;
        int a, b, c, d;
        cin >> a;
        vector<int> A(a);

        for (int i = 0; i < a; i++)
            cin >> A[i];
        cin >> b;
        vector<int> B(b);

        for (int i = 0; i < b; i++)
            cin >> B[i];
        cin >> c;
        vector<int> C(c);

        for (int i = 0; i < c; i++)
            cin >> C[i];
        cin >> d;
        vector<int> D(d);

        for (int i = 0; i < d; i++)
            cin >> D[i];

        ll area1, area2, area3, area4;
        area1 = (A[a - 1] - A[0]) * (1ll) * h;
        area2 = (B[b - 1] - B[0]) * (1ll) * h;
        area3 = (C[c - 1] - C[0]) * (1ll) * w;
        area4 = (D[d - 1] - D[0]) * (1ll) * w;
        cout << max({area1, area2, area3, area4}) << endl;
    }
    return 0;
}