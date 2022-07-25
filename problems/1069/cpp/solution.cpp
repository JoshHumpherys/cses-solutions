#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = (int)s.size();
    int maxLength = 1;
    int currentLength = 1;
    for (int i = 1; i < n; ++i) {
        if (s[i] == s[i - 1]) {
            ++currentLength;
        } else {
            maxLength = max(maxLength, currentLength);
            currentLength = 1;
        }
    }
    maxLength = max(maxLength, currentLength);
    cout << maxLength << endl;
    return 0;
}
