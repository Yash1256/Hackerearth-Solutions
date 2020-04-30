#include <bits/stdc++.h>

using namespace std;

int mod = 1e9 + 7;

void solve() {
    string str;
    cin >> str;
    long long int result = 1;
    map<char, int> m;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '_') {
            result *= m.size();
        }
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            if (m.find(str[i]) != m.end()) {
                continue;
            } else {
                m[str[i]] += 1;
            }
        }
    }
    cout << result << endl;
}

int main() {
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
}