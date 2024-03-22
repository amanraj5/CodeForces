#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        bool ans=false;
        for (int i = 0; i < 2; i++)
        {
            if (n - k * i >= 0 and (n - k * i) % 2 == 0)
            {
                ans=true;
                
                break;
            }
        }
        if(ans) cout << "YES\n";
        else cout<<"NO\n";
    }
    return 0;
}