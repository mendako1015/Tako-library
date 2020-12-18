#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_A"

#include <bits/stdc++.h>
using namespace std;
#include "../../DataStructure/SegmentTree.cpp"
typedef long long ll;

int main() {
	ll n, q;
	cin >> n >> q;
	SegmentTree<ll> segtree(n+10, true, INT_MAX, 0, 
	[](ll x, ll y){ return min(x, y); },
	[](ll x, ll y){ return y; },
	[](ll x, ll btm, ll tp){ return x * (tp - btm); });

	segtree.update(0, n, 2147483647);
	while(q--) {
		int com;
		cin >> com;
		if(com == 0) {
			ll x, y, z;
			cin >> x >> y;
			segtree.update(x, y);
		} else {
			ll x, y, z;
			cin >> x >> y;
			cout << segtree.get(x, ++y) << endl;
		}
	}
	return 0;
}