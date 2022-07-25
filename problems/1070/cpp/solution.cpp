#include <bits/stdc++.h>

using namespace std;

int main() {
    const string NO_SOLUTION = "NO SOLUTION";
    int n;
    cin >> n;
    if (n == 1) {
        cout << 1 << endl;
        return 0;
    } else if (n <= 3) {
        cout << NO_SOLUTION << endl;
        return 0;
    }
    for (int i = n - (n % 2 == 0 ? 1 : 0); i > 0; i -= 2) {
        cout << i << ' ';
    }
    for (int i = n - n % 2; i > 2; i -= 2) {
        cout << i << ' ';
    }
    cout << '2' << endl;
    return 0;
}
