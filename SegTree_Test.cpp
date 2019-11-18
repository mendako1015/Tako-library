#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define all(x) (x).begin(),(x).end()
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, m, n) for(int i = m; i < n; i++)
#define SORT(v) sort(all(v))
#define REV(v) sort((v).begin(), (v).end(), greater<int>())
#define INF 1000000007
#define fcout cout << fixed << setprecision(15)
typedef long long ll;
typedef pair<int, int> P;
int gcd(int a,int b){return b?gcd(b,a%b):a;};
int lcm(int a,int b){return a * b / gcd(a, b);};
int mod(int a,int b){return (a+b-1)/b;};
int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
template<typename A, size_t N, typename T>
void Fill(A (&array)[N], const T &val){std::fill( (T*)array, (T*)(array+N), val );};
template<class T>inline bool chmax(T& a,T b){if(a < b){a=b;return true;}return false;};
template<class T>inline bool chmin(T& a,T b){if(a > b){a=b;return true;}return false;};

struct SegTree {

  int a[100000];
  int leaf_num = 1;
  int seg[400000];

  SegTree(int n) {
    while(leaf_num < n) {
  		leaf_num *= 2;
  	}
  	for(int i = 0 ; i < n; i++) {
  		seg[i + leaf_num - 1] = a[i];
  	}
  	for(int i = leaf_num - 2; i >= 0; i--) {
  		seg[i] = func(seg[i * 2 + 1], seg[i * 2 + 2]);
  	}
  }

  int func(int x, int y) {
  	return min(x, y); // ＊＊＊＊＊＊＊＊＊＊関数＊＊＊＊＊＊＊＊＊＊
  }

  int identity_element() {
  	return INT_MAX; // ＊＊＊＊＊＊＊＊＊＊単位元＊＊＊＊＊＊＊＊＊＊
  }

  void update(int k, int x) {
  	k--;
  	k += leaf_num - 1;
  	seg[k] = x;
  	while(k != 0) { // 	親に到達するまで
  		k = (k - 1) / 2; // 頂点をひとつ上に移動
  		seg[k] = func(seg[k * 2 + 1], seg[k * 2 + 2]);
  	}
  }

  int _get_interval(int a, int b, int k, int l, int r) {
  	if(b <= l || r <= a) return identity_element();
  	if(a <= l && r <= b) {
  		return seg[k];
  	}
  	int lch = _get_interval(a, b, k * 2 + 1, l, (l + r) / 2);
  	int rch = _get_interval(a, b, k * 2 + 2, (l + r) / 2, r);
  	return func(lch, rch);
  }

  int get_interval(int l, int r) {
  	return _get_interval(l - 1, r, 0, 0, leaf_num);
  }
};


int main() {
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(false);

  int n, q;
	cin >> n >> q;
  SegTree seg(n);
	for(int i = 0; i < n; i++) {
		cin >> seg.a[i];
	}

  for(int i = 0; i < q; i++) {
    int qtype, x, y;
    cin >> qtype >> x >> y;
    if(qtype == 0) {
      seg.update(x, y);
    } if(qtype == 1) {
      cout << seg.get_interval(x, y) << endl;
    } if(qtype == 2) {
      cout << seg.get_interval(1, n) << endl;
    }
  }
  return 0;
}
