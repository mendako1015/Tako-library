#define PROBLEM "https://judge.yosupo.jp/problem/staticrmq"

#include <bits/stdc++.h>
using namespace std;
#include "../../DataStructure/SegmentTree.cpp"
typedef long long ll;

int main() {
	int n, q;
	cin >> n >> q;
	SegmentTree<ll> segtree(n, false, 1e18, 0,
		[](ll a, ll b) { return min(a, b); },
		[](ll a, ll b) { return b; },
		[](ll x, ll btm, ll tp) { return x; });
	for(int i = 0; i < n; i++) {
		int a;
		cin >> a;
		segtree.update(i, a);
	}
	while(q--) {
		int l, r;
		cin >> l >> r;
		cout << segtree.get(l, r) << endl;
	}
	return 0;
}