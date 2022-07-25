#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int previous;
    cin >> previous;
    long long result = 0;
    for (int i = 1; i < n; ++i) {
        int current;
        cin >> current;
        if (current < previous) {
            result += previous - current;
        } else {
            previous = current;
        }
    }
    cout << result << endl;
    return 0;
}
