#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        int cnt = 0;
        bool ans=false;
        while (cnt<6)
        {
            if(x.find(s)!=string::npos){
                ans=true;
                break;
            }
            x+=x;
            cnt++;
        }
        if (ans)
            cout << cnt << "\n";
        else
            cout << -1 << "\n";
    }
    return 0;
}