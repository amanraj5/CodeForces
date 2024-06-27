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
        string s;
        cin >> s;
        stack<char> st;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                st.push('(');
            }
            else if (s[i] == ')' and !st.empty())
            {
                st.pop();
            }
        }
        cout << st.size() << endl;
    }
    return 0;
}