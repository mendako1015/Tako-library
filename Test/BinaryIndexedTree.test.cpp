#define PROBLEM "https://judge.yosupo.jp/problem/point_add_range_sum"

#include <bits/stdc++.h>
using namespace std;
#include "../DataStructure/BinaryIndexedTree.cpp"

int main() {
	int n, q;
	cin >> n >> q;
	BinaryIndexedTree<long long> BIT(n);
	for(int i = 0; i < n; i++) {
		int a;
		cin >> a;
		BIT.add(i, a);
	}
	while(q--) {
		int com, a, b;
		cin >> com >> a >> b;
		if(com == 0) BIT.add(a, b);
		else cout << BIT.sum(a, b) << endl;
	}
}