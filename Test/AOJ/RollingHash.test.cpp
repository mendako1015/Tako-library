#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/14/ALDS1_14_B"

#include <bits/stdc++.h>
using namespace std;
#include "../../string/RollingHash.cpp"
typedef long long ll;

int main() {
	string t, p;
	cin >> t >> p;
	if(t.size() < p.size()) return 0;
	const ll MOD = 1e9+7;
	const ll BASE = 1777771;
	RollingHash<ll, MOD, BASE> rt(t), rp(p);
	for(int i = 0; i < t.size() - p.size() + 1; i++) {
		if(rt.get(i, i + p.size()) == rp) cout << i << endl;
	}
	return 0;
}