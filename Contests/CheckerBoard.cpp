#include <bits/stdc++.h>
using namespace std;

char reverse(char c)
{
    if (c == '#')
        c = '.';
    else
        c = '#';
        
    return c;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        vector<vector<char>> mat(2 * n, vector<char>(2 * n));
        char c = '#';
        for (int i = 0; i < 2 * n - 1; i += 2)
        {
            for (int j = 0; j < 2 * n - 1; j += 2)
            {
                mat[i][j] = c;
                mat[i][j + 1] = c;
                mat[i + 1][j] = c;
                mat[i + 1][j + 1] = c;
                c=reverse(c);
            }
            if (n % 2 == 0) c=reverse(c);
        }
        for (int i = 0; i < 2 * n; i++)
        {
            for (int j = 0; j < 2 * n; j++)
            {
                cout << mat[i][j];
            }
            cout << endl;
        }
        
    }
    return 0;
}