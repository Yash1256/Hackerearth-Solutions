#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    if (s.length() != t.length()) {
        cout << "NO";
        return 0;
    }
    bool flag = true;
    for (int i = 0; i < s.length(); i++) {
        if (t[i] - s[i] < 0) {
            flag = false;
            break;
        }
    }

    if (flag) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}