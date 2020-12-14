#define PROBLEM "https://judge.yosupo.jp/problem/static_range_sum"

#include <bits/stdc++.h>
using namespace std;
#include "../DataStructure/SegmentTree.cpp"
typedef long long ll;

int main() {
	int n, q;
    cin >> n >> q;
    SegmentTree<ll> segtree(n, 0,
        [](ll a, ll b) { return a + b; },
        [](ll a, ll b) { return b; });
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        segtree.update(i, a);
    }
    while(q--) {
        int l, r;
        cin >> l >> r;
        cout << segtree.get_interval(l, r) << endl;
    }
	return 0;
}