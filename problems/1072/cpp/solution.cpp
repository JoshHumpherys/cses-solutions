#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> results{0,6,28,96,252};
    for (int i = 0; i < (int)results.size() && i < n; ++i) {
        cout << results[i] << endl;
    }
    long long result = results[results.size() - 1];
    for (long long i = (long long)results.size() + 1; i <= n; ++i) {
        long long current = (2 * i - 1) * (i - 1) * (i - 1) + (2 * i - 1) * (2 * i - 2) / 2;
        current -= 3 * 2;
        current -= 2 * 3;
        current -= 2 * 2;
        current -= 2 * 3;
        current -= 2;
        current -= 2 * (i - 5) * 4;
        result += current;
        cout << result << endl;
    }
    return 0;
}
