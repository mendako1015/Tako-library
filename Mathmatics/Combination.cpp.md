---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Mathmatics/Combination.cpp\"\nvector<ll> fact;\n \nvoid\
    \ init_fact(int n) {\n    fact = vector<ll>(n);\n    fact[0] = 1;\n    for (int\
    \ i = 1; i < n; i++) fact[i] = fact[i - 1] * i % MOD;\n}\n \nll calc_comb(ll n,\
    \ ll r) {\n    if (n < r)return 0;\n    return calc_div(fact[n], fact[r] * fact[n\
    \ - r] % MOD);\n}\n"
  code: "vector<ll> fact;\n \nvoid init_fact(int n) {\n    fact = vector<ll>(n);\n\
    \    fact[0] = 1;\n    for (int i = 1; i < n; i++) fact[i] = fact[i - 1] * i %\
    \ MOD;\n}\n \nll calc_comb(ll n, ll r) {\n    if (n < r)return 0;\n    return\
    \ calc_div(fact[n], fact[r] * fact[n - r] % MOD);\n}"
  dependsOn: []
  isVerificationFile: false
  path: Mathmatics/Combination.cpp
  requiredBy: []
  timestamp: '2020-12-05 06:50:48+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Mathmatics/Combination.cpp
layout: document
redirect_from:
- /library/Mathmatics/Combination.cpp
- /library/Mathmatics/Combination.cpp.html
title: Mathmatics/Combination.cpp
---
