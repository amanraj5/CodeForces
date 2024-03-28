#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string time;
        cin >> time;
        int hour = stoi(time.substr(0, 2));
        string temp;
        if (hour - 12 < 10)
            temp = '0' + to_string(hour - 12);
        if (time == "24:00")
            cout << time << " AM\n";
        else if (time == "12:00")
            cout << time << " PM\n";
        else if (hour == 0)
            cout << 12 << time.substr(2, 5) << " AM\n";
        else if (hour < 12)
            cout << time << " AM\n";
        else if (hour == 12)
            cout << time << " PM\n";
        else if (hour - 12 < 10)
            cout << temp << time.substr(2, 5) << " PM\n";
        else
            cout << hour - 12 << time.substr(2, 5) << " PM\n";
    }
    return 0;
}