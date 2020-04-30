#include <bits/stdc++.h>

using namespace std;

int mod = 1e9 + 7;

void solve() {
    string str;
    cin >> str;
    int size = str.length();
    long long int result = 0, co = 0;
    for (int i = 0; i < size; i++) {
        if (str[i] == '$' || str[i] == '&') {
            result += size - i;
            result += (str.length() - i) * (co);
            co = 0;
        } else {
            co++;
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