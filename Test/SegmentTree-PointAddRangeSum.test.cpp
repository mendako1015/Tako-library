#define PROBLEM "https://judge.yosupo.jp/problem/point_add_range_sum"

#include <bits/stdc++.h>
using namespace std;
#include "../DataStructure/SegmentTree.cpp"
typedef long long ll;

int main() {
	int n, q;
	cin >> n >> q;
	SegmentTree<ll> segtree(n, 0,
		[](ll a, ll b) { return a + b; },
		[](ll a, ll b) { return a + b; });
	for(int i = 0; i < n; i++) {
		int a;
		cin >> a;
		segtree.update(i, a);
	}
	while(q--) {
		int cmd, x, y;
		cin >> cmd >> x >> y;
		if(cmd == 0) segtree.update(x, y);
		else cout << segtree.get_interval(x, y) << endl;
	}
	return 0;
}