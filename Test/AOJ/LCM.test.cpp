#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_C"

#include <bits/stdc++.h>
using namespace std;
#include "../../Mathmatics/IntegerTheory.cpp"
typedef long long ll;

int main() {
	Integer<ll> it(1010);
	int n;
	cin >> n;
	int ans = 1;
	for(int i = 0; i < n; i++) {
		int a;
		cin >> a;
		ans = it.lcm(ans, a);
	}
	cout << ans << endl;
	return 0;
}