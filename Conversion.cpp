#include <bits/stdc++.h>

using namespace std;

int mod = 1e9 + 7;

void solve() {
    char str[200];
    // getchar();
    scanf(" %[^\n]%*c", str);
    int i = 0;
    // puts(str);
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            cout << '$';
            i++;
            continue;
        }
        char c = tolower(str[i]);
        // cout << c << endl;
        int x = c - 'a';
        cout << x + 1;
        i++;
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