#define PROBLEM "https://judge.yosupo.jp/problem/staticrmq"

#include <bits/stdc++.h>
using namespace std;
#include "../../DataStructure/SparseTable.cpp"
typedef long long ll;

int main() {
	int n, q;
	cin >> n >> q;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	SparseTable<int> sp(a, [](int x, int y) { return min(x, y); });
	while(q--) {
		int l, r;
		cin >> l >> r;
		cout << sp.query(l, r) << endl;
	}
	return 0;
}