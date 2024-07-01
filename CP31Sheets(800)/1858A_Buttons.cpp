#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int both = (c + 1) / 2;
        int annaScore = a + both;
        int katieScore = b + (c - both);
        if (annaScore > katieScore)
            cout << "First\n";
        else
            cout << "Second\n";
    }
    return 0;
}