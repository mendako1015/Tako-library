#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/1/DSL_1_B"

#include <bits/stdc++.h>
using namespace std;
#include "../DataStructure/WeightedUnionFind.cpp"

int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);

	int n, q;
	cin >> n >> q;
	WeightedUnionFind<int> ut(n, 0);
	while(q--) {
		int type;
		cin >> type;
		if(type == 0) {
			int x, y, z;
			cin >> x >> y >> z;
			ut.unite(x, y, z);
		} else {
			int x, y;
			cin >> x >> y;
			if(ut.same(x, y)) cout << ut.diff(x, y) << endl;
			else cout << "?" << endl;
		}
	}
	return 0;
}
