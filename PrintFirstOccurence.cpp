#include <bits/stdc++.h>

using namespace std;

int mod = 1e9 + 7;

void solve() {
    string str;
    cin >> str;
    map<char, int> m;
    for (int i = 0; i < str.length(); i++) {
        if (m.find(str[i]) != m.end()) {
            continue;
        } else {
            cout << str[i];
            m[str[i]]++;
        }
    }
    cout << endl;
}

int main() {
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
}