#include <bits/stdc++.h>

using namespace std;

int mod = 1e9 + 7;

void solve() {
    string str;
    cin >> str;
    int x, y;
    cin >> x >> y;
    sort(str.begin() + x, str.begin() + y + 1, greater<int>());
    cout << str << endl;
}

int main() {
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
}