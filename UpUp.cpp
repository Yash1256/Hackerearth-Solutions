#include <bits/stdc++.h>

using namespace std;

int mod = 1e9 + 7;

void solve() {
    char ch[30000];
    scanf(" %[^\n]%*c", ch);
    vector<string> str;
    string temp;
    int i = 0;
    while (ch[i] != '\0') {
        if (ch[i] == ' ') {
            str.push_back(temp);
            temp.clear();
            i++;
        } else {
            temp += ch[i++];
        }
    }
    str.push_back(temp);
    for (auto &it : str) {
        it[0] = toupper(it[0]);
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
}