#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char grid[2][n];
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
                cin >> grid[i][j];
        }
        int row = 0, col = 0;

        while (col < n - 1)
        {
            if (grid[row][col] == '>')
                col++;
            else
                row++;
        }

        if (row < 2 && col == n - 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}