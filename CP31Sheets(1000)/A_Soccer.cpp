#include <iostream>
using namespace std;

string canScoresBeUnequal(int x1, int y1, int x2, int y2) {
    
    if ((x1 < y1 && x2 >= y2) || (x1 > y1 && x2 <= y2)) {
        return "NO";
    }
    return "YES";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << canScoresBeUnequal(x1, y1, x2, y2) << endl;
    }
    return 0;
}
