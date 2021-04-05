#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
// #pragma GCC target("arch=skylake-avx512")

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
using mint = modint1000000007;
#endif

typedef long long ll;
typedef pair<int,int> P;

#define REP(i,m,n) for(int (i)=(m);(i)<(n);(i)++)
#define rep(i,n) REP((i),0,(n))
#define rrep(i,n) REP((i),1,(n+1))
#define int long long // !! warning !!
#define endl "\n"
#define all(x) (x).begin(),(x).end()

template<typename A, size_t N, typename T>
void Fill(A(&array)[N],const T &val){std::fill((T*)array,(T*)(array+N),val);}
template<class T>inline bool chmax(T& a,T b){if(a<b){a=b;return true;}return false;};
template<class T>inline bool chmin(T& a,T b){if(a>b){a=b;return true;}return false;};