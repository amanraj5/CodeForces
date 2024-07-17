#include <bits/stdc++.h>
using namespace std;

int n = 1000000;
vector<int> primes;
void prime()
{
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
            primes.push_back(i);
    }
}
int main()
{
    int t;
    cin >> t;
    prime();
    while (t--)
    {
        int d;
        cin >> d;
        int ans = 1;
        int num = 1;
        int i, j;
        for (i = 0; i < primes.size(); i++)
        {
            if (primes[i] - num >= d)
            {
                ans *= primes[i];
                num = primes[i];
                break;
            }
        }
        for (j = i + 1; j < primes.size(); j++)
        {
            if (primes[j] - num >= d)
            {
                ans *= primes[j];
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}