#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_E"

#include <bits/stdc++.h>
using namespace std;
#include "../../Mathmatics/Extended-Euclidean.cpp"

int main() {
	int a, b, x, y;
	cin >> a >> b;
	extgcd(a, b, x, y);
	cout << x << " " << y << endl;
	return 0;
}