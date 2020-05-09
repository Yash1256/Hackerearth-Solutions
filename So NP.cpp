/**
 *    author:  tourist1256
 *    created: 2020-05-09 15:16:10
**/

#include <bits/stdc++.h>

using namespace std;
#define quick                    \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")
#define time cout << (0.1 * clock()) / CLOCKS_PER_SEC << endl;
#define countBits(x) __builtin_popcount(ll(x))
#define countZeroesAtBegin(x) __builtin_clz(ll(x))
#define countZeroesAtEnd(x) __builtin_ctz(ll(x))
#define last(x) x[x.end() - x.begin() - 1]
#define pb push_back
#define bg begin
#define ff first
#define ss second
#define PI 3.14
#define mod 1000000007
typedef long long ll;
typedef pair<ll, ll> pl;
const ll MAX = 2e5 + 10;
#define forn(n) for (ll i = 0; i < ll(n); i++)
#define forkn(i, k, n) for (ll i = k; i < ll(n); i++)
#define forin(n) for (ll i = ll(n - 1); i >= 0; i--)

ll N, M, K, u, v;
vector<ll> graph[MAX];
bool mark[MAX];

void dfs(ll v) {
    mark[v] = 1;
    for (ll u : graph[v]) {
        if (!mark[u])
            dfs(u);
    }
}

void solve() {
    cin >> N >> M >> K;
    forn(M) {
        cin >> u >> v;
        u--, v--;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int cnt = 0;
    forn(N) {
        if (!mark[i])
            dfs(i), cnt++;
    }
    if (cnt > K)
        cout << -1;
    else
        cout << M - N + K;
}

int32_t main() {
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}