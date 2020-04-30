#include <bits/stdc++.h>

using namespace std;

int mod = 1e9 + 7;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<char> lower_alpha(26);
    vector<char> upper_alpha(26);
    vector<char> digit(10);
    digit[0] = '0';
    for (int i = 0; i < 10; i++) {
        digit[i] = '0' + i;
    }
    lower_alpha[0] = 'a';
    for (int i = 1; i < 26; i++) {
        lower_alpha[i] = 'a' + i;
    }
    upper_alpha[0] = 'A';
    for (int i = 1; i < 26; i++) {
        upper_alpha[i] = 'A' + i;
    }
    string str;
    cin >> str;
    int turn_alpha = k % 26;
    int turn_num = k % 10;
    for (int i = 0; i < str.length(); i++) {
        if (isalnum(str[i])) {
            if (isalpha(str[i]) && islower(str[i])) {
                str[i] = lower_alpha[((str[i] - 'a') % 26 + turn_alpha % 26) % 26];
            } else if (isalpha(str[i]) && isupper(str[i])) {
                str[i] = upper_alpha[((str[i] - 'A') % 26 + turn_alpha % 26) % 26];
            } else {
                str[i] = digit[((str[i] - '0') % 10 + turn_num % 10) % 10];
            }
        }
    }
    cout << str << endl;
}

int main() {
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
}