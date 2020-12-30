#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_14_B"

#include <bits/stdc++.h>
using namespace std;
#include "../../String/RollingHash.cpp"
typedef long long ll;

int main() {
	string t, p;
	cin >> t >> p;
	if(t.size() < p.size()) return 0;
	RollingHash<ll, 1000000007, 1777771> rt(t), rp(p);
	for(int i = 0; i < t.size() - p.size() + 1; i++) {
		if(rt.get(i, i + p.size()) == rp) cout << i << endl;
	}
	return 0;
}