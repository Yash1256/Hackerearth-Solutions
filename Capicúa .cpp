#include <bits/stdc++.h>

using namespace std;

int mod = 1e9 + 7;

long long int power(long long int x, unsigned int y) {
    long long int res = 1;  // Initialize result

    x = x % mod;  // Update x if it is more than or
                  // equal to p

    if (x == 0) return 0;  // In case x is divisible by p;

    while (y > 0) {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % mod;

        // y must be even now
        y = y >> 1;  // y = y/2
        x = (x * x) % mod;
    }
    return res;
}
void solve() {
    long long int n;
    cin >> n;
    ostringstream str1;
    str1 << n;
    string s = str1.str();
    int length = floor(log10(n) + 1);
    bool flag = true;
    for (int i = 0; i < length / 2; i++) {
        if (s[i] != s[length - i - 1]) {
            flag = false;
            break;
        }
    }
    if (flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
}