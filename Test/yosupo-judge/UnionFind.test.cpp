#define PROBLEM "https://judge.yosupo.jp/problem/unionfind"

#include <bits/stdc++.h>
using namespace std;
#include "../../DataStructure/UnionFind.cpp"


int main() {
	int n, q;
	cin >> n >> q;
	UnionFind<int> ut(n);
	for(int i = 0; i < q; i++) {
		int t, u, v;
		cin >> t >> u >> v;
		if(t == 0) ut.unite(u, v);
		else cout << ut.same(u, v) << endl;
	}
	return 0;
}