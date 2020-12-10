---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Mathmatics/mod_series.cpp\"\nconst int MOD;\n\nint mod_pow(int\
    \ x, int pow) {\n    if(pow == 0) return 1;\n    int a = mod_pow(x, pow / 2);\n\
    \    a = a * a % MOD;\n    if(pow % 2 == 1) a *= x;\n    return a % MOD;\n}\n\n\
    int mod_div(int a, int b) {\n    return a * mod_pow(b, MOD - 2) % MOD;\n}\n\n\
    vector<int> fact;\n\nvoid init_fact(int factSize) {\n    fact = vector<int>(factSize);\n\
    \    fact[0] = 1;\n    for(int i = 1; i < factSize; i++) fact[i] = fact[i - 1]\
    \ * i % MOD;\n}\n\nint calc_comb(int n, int r) {\n    if(n < r) return 0;\n  \
    \  return mod_div(fact[n], fact[r] * fact[n - r] % MOD);\n}\n"
  code: "const int MOD;\n\nint mod_pow(int x, int pow) {\n    if(pow == 0) return\
    \ 1;\n    int a = mod_pow(x, pow / 2);\n    a = a * a % MOD;\n    if(pow % 2 ==\
    \ 1) a *= x;\n    return a % MOD;\n}\n\nint mod_div(int a, int b) {\n    return\
    \ a * mod_pow(b, MOD - 2) % MOD;\n}\n\nvector<int> fact;\n\nvoid init_fact(int\
    \ factSize) {\n    fact = vector<int>(factSize);\n    fact[0] = 1;\n    for(int\
    \ i = 1; i < factSize; i++) fact[i] = fact[i - 1] * i % MOD;\n}\n\nint calc_comb(int\
    \ n, int r) {\n    if(n < r) return 0;\n    return mod_div(fact[n], fact[r] *\
    \ fact[n - r] % MOD);\n}"
  dependsOn: []
  isVerificationFile: false
  path: Mathmatics/mod_series.cpp
  requiredBy: []
  timestamp: '2020-12-05 06:50:48+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Mathmatics/mod_series.cpp
layout: document
redirect_from:
- /library/Mathmatics/mod_series.cpp
- /library/Mathmatics/mod_series.cpp.html
title: Mathmatics/mod_series.cpp
---
