#include <bits/stdc++.h>

using namespace std;

int mod = 1e9 + 7;

void solve() {
    string str;
    cin >> str;
    int n = str.length();
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != str[n - i - 1]) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main() {
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
}