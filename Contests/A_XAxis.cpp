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
        int ans1=abs(a-a)+abs(b-a)+abs(c-a);
        int ans2=abs(a-b)+abs(b-b)+abs(c-b);
        int ans3=abs(a-c)+abs(b-c)+abs(c-c);
        int ans=min({ans1,ans2,ans3});
        cout<<ans<<endl;

    }
    return 0;
}