#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_B"

#include <bits/stdc++.h>
using namespace std;
#include "../../Mathmatics/IntegerTheory.cpp"
typedef long long ll;

int main() {
	Integer<ll> it(1010);
	int a, b;
	cin >> a >> b;
	cout << it.square_pow(a, b) << endl;
	return 0;
}