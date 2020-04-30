#include <bits/stdc++.h>
using namespace std;
#define MAXN 100005
int main(int argc, char *args[]) {
    int tc;
    cin >> tc;
    while (tc--) {
        int cnt[200] = {0};
        string str;
        cin >> str;
        for (int i = 0; i < str.size(); i++) {
            cnt[str[i]]++;
        }
        long long ans = 0;
        ans += 2 * min(cnt['('], cnt[')']);
        ans += 2 * min(cnt['['], cnt[']']);
        ans += 2 * min(cnt['{'], cnt['}']);

        cout << ans << "\n";
    }
    return 0;
}