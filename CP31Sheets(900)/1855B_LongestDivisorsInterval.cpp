#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin>>n;
        long long i=1;
        while (n%i==0)
        {
            /* code */
            i++;
        }
        cout<<i-1<<endl;
        
    }
    return 0;
}