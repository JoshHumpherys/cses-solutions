#include <bits/stdc++.h>

using namespace std;

int main() {
    const string YES = "YES";
    const string NO = "NO";
    long long n;
    cin >> n;
    if (n <= 2 || (n + 1) / 2 % 2 == 1) {
        cout << NO << endl;
        return 0;
    }
    cout << YES << endl;
    vector<bool> v(n);
    long long sum = n * (n + 1) / 4;
    int i = n;
    int count = 0;
    while (sum > 0 && i > 0) {
        ++count;
        if (i >= sum) {
            v[sum - 1] = true;
            break;
        } else {
            v[i - 1] = true;
            sum -= i;
        }
        --i;
    }
    cout << count << endl;
    int currentCount = 0;
    for (int i = 0; i < n; ++i) {
        if (v[i]) {
            cout << i + 1;
            ++currentCount;
            if (currentCount != count) {
                cout << ' ';
            }
        }
    }
    cout << endl;
    cout << n - count << endl;
    currentCount = 0;
    for (int i = 0; i < n; ++i) {
        if (!v[i]) {
            cout << i + 1;
            ++currentCount;
            if (currentCount != n - count) {
                cout << ' ';
            }
        }
    }
    cout << endl;
    return 0;
}
