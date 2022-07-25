#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int result = n;
    for (int i = 1; i < n; ++i) {
        int input;
        cin >> input;
        result ^= input;
        result ^= i;
    }
    cout << result << endl;
    return 0;
}
