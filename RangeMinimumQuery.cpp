#include <bits/stdc++.h>

using namespace std;

vector<int> seg;

void build(vector<int> &v, int l, int r, int ind) {
    if (l >= r) {
        seg[ind] = v[l];
        return;
    }
    int mid = l + ((r - l) / 2);
    build(v, l, mid, (ind << 1) + 1);
    build(v, mid + 1, r, (ind << 1) + 2);
    int indl = ((ind << 1) + 1);
    int indr = indl + 1;
    seg[ind] = (seg[indl] > seg[indr]) ? seg[indr] : seg[indl];
    // cout << seg[ind] << endl;
    return;
}

int query(int indl, int indr, int l, int r, int curr) {
    if (indr == r && indl == l) {
        // cout << seg[curr] << endl;
        return seg[curr];
    }
    // cout << indr << " " << r << endl;
    // cout << indl << " " << l << endl;
    // cout << seg[curr] << " ";
    // cout << curr << endl;
    int mid = l + ((r - l) / 2);
    int ans = 0;
    int vl, vr;
    if (indl <= mid) {
        vl = query(indl, (indr < mid ? indr : mid), l, mid, ((curr << 1) + 1));
    }
    if (indr > mid) {
        vr = query((indl > mid ? indl : mid + 1), indr, mid + 1, r,
                   ((curr << 1) + 2));
        if (indl <= mid) {
            vl = vl > vr ? vr : vl;
        } else {
            vl = vr;
        }
    }
    // cout << vl << " ";
    return vl;
}

void update(vector<int> &v, int curr, int l, int r, int indx, int val) {
    if (l == r) {
        v[indx] = val;
        seg[curr] = v[indx];
    } else {
        int mid = l + ((r - l) / 2);
        if (l <= indx && indx <= mid)
            update(v, ((curr << 1) + 1), l, mid, indx, val);
        else
            update(v, ((curr << 1) + 2), (mid + 1), r, indx, val);
        int lchild = ((curr << 1) + 1);
        int rchild = lchild + 1;
        seg[curr] = (seg[lchild] > seg[rchild]) ? seg[rchild] : seg[lchild];
    }
}

int main() {
    seg.clear();
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    seg.resize(4 * n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    build(arr, 0, n - 1, 0);
    char ch;
    int l, r;
    while (q--) {
        cin >> ch >> l >> r;
        if (ch == 'u') {
            update(arr, 0, 0, n - 1, l - 1, r);
        } else if (ch == 'q') {
            cout << query(l - 1, r - 1, 0, (n - 1), 0) << endl;
        }
    }
    return 0;
}