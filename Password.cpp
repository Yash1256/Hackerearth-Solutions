#include <bits/stdc++.h>

using namespace std;

int mod = 1e9 + 7;

void solve() {
    int n;
    string str, cpy;
    cin >> n;
    map<string, int> m;
    while (n--) {
        cin >> str;
        cpy = str;
        reverse(str.begin(), str.end());
        if (m.find(cpy) != m.end()) {
            cout << cpy.length() << " " << cpy[cpy.length() / 2];
            return;
        }
        m[str]++;
    }
}

int main() {
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
}