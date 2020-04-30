#include <bits/stdc++.h>

using namespace std;

int mod = 1e9 + 7;

void solve() {
    char str[100000];
    scanf(" %[^\n]%*c", str);
    vector<string> s;
    string temp = "";
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            s.push_back(temp);
            temp.clear();
            i++;
        } else {
            temp += str[i];
            i++;
        }
    }
    s.push_back(temp);
    int size = s.size();
    for (int i = 0; i < size / 2; i++) {
        temp = s[i];
        s[i] = s[size - i - 1];
        s[size - i - 1] = temp;
    }
    for (auto &it : s) {
        cout << it << " ";
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