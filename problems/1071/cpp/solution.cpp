#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int x, y;
        cin >> y >> x;
        long long level = max(x, y);
        long long sumOdds = (level - 1) * (level - 1);
        if (x >= y) {
            if (level % 2 == 0) {
                cout << sumOdds + y << endl;
            } else {
                cout << sumOdds + x + level - y << endl;
            }
        } else {
            if (level % 2 == 0) {
                cout << sumOdds + y + level - x << endl;
            } else {
                cout << sumOdds + x << endl;
            }
        }
    }
    return 0;
}
