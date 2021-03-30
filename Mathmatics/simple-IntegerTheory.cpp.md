---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Mathmatics/simple-IntegerTheory.cpp\"\nvector<int> fact;\n\
    \nint mod_pow(int A, int B, int mod = MOD) {\n\tif(!B) return 1;\n\tif(B & 1)\
    \ return mod_pow(A, B - 1) * A % mod;\n\tint C = mod_pow(A, B >> 1);\n\treturn\
    \ C * C % mod;\n}\n\nvoid fact_init(int n) {\n\tfact.resize(n);\n\tfact[0] = 1;\n\
    \tfor(int i = 1; i < n; i++) fact[i] = fact[i - 1] * i % MOD;\n}\n\nint comb(int\
    \ n, int k, int mod = MOD) {\n\treturn fact[n] * mod_pow(fact[n - k] * fact[k]\
    \ % mod, mod - 2) % mod;\n}\n"
  code: "vector<int> fact;\n\nint mod_pow(int A, int B, int mod = MOD) {\n\tif(!B)\
    \ return 1;\n\tif(B & 1) return mod_pow(A, B - 1) * A % mod;\n\tint C = mod_pow(A,\
    \ B >> 1);\n\treturn C * C % mod;\n}\n\nvoid fact_init(int n) {\n\tfact.resize(n);\n\
    \tfact[0] = 1;\n\tfor(int i = 1; i < n; i++) fact[i] = fact[i - 1] * i % MOD;\n\
    }\n\nint comb(int n, int k, int mod = MOD) {\n\treturn fact[n] * mod_pow(fact[n\
    \ - k] * fact[k] % mod, mod - 2) % mod;\n}"
  dependsOn: []
  isVerificationFile: false
  path: Mathmatics/simple-IntegerTheory.cpp
  requiredBy: []
  timestamp: '2021-03-30 21:39:54+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Mathmatics/simple-IntegerTheory.cpp
layout: document
redirect_from:
- /library/Mathmatics/simple-IntegerTheory.cpp
- /library/Mathmatics/simple-IntegerTheory.cpp.html
title: Mathmatics/simple-IntegerTheory.cpp
---
