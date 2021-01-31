#define PROBLEM "https://judge.yosupo.jp/problem/static_range_sum"

#include <bits/stdc++.h>
using namespace std;
#include "../../DataStructure/SegmentTree.cpp"
typedef long long ll;

int main() {
	ll n, q;
	cin >> n >> q;
	SegmentTree<ll> segtree(n, false, 0LL, 0LL,
		[](ll a, ll b) { return a + b; },
		[](ll a, ll b) { return b; },
		[](ll x, ll btm, ll tp) { return x; });
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	segtree.build(a);
	while(q--) {
		int l, r;
		cin >> l >> r;
		cout << segtree.get(l, r) << endl;
	}
	return 0;
}