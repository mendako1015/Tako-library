---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: Test/AOJ/RollingHash.test.cpp
    title: Test/AOJ/RollingHash.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 1 \"String/RollingHash.cpp\"\ntemplate <typename T, T mod, T\
    \ base>\nclass RollingHash {\n\tvector<T> hash, power;\n\n\tpublic:\n\tRollingHash(string\
    \ &s) {\n\t\tint n = s.size();\n\t\thash.assign(n+1, 0);\n\t\tpower.assign(n+1,\
    \ 1);\n\t\tfor(int i = 0; i < n; i++) {\n\t\t\thash[i+1] = (hash[i] * base + s[i])\
    \ % mod;\n\t\t\tpower[i+1] = power[i] * base % mod;\n\t\t}\n\t}\n\n\t// get value\
    \ of [l, r)\n\tT get(int l, int r) {\n\t\tint ret = hash[r] + mod - (hash[l] *\
    \ power[r - l]) % mod;\n\t\tif(ret >= mod) ret -= mod;\n\t\treturn ret;\n\t}\n\
    \n\toperator T() {\n\t\treturn hash.back();\n\t}\n};\n"
  code: "template <typename T, T mod, T base>\nclass RollingHash {\n\tvector<T> hash,\
    \ power;\n\n\tpublic:\n\tRollingHash(string &s) {\n\t\tint n = s.size();\n\t\t\
    hash.assign(n+1, 0);\n\t\tpower.assign(n+1, 1);\n\t\tfor(int i = 0; i < n; i++)\
    \ {\n\t\t\thash[i+1] = (hash[i] * base + s[i]) % mod;\n\t\t\tpower[i+1] = power[i]\
    \ * base % mod;\n\t\t}\n\t}\n\n\t// get value of [l, r)\n\tT get(int l, int r)\
    \ {\n\t\tint ret = hash[r] + mod - (hash[l] * power[r - l]) % mod;\n\t\tif(ret\
    \ >= mod) ret -= mod;\n\t\treturn ret;\n\t}\n\n\toperator T() {\n\t\treturn hash.back();\n\
    \t}\n};"
  dependsOn: []
  isVerificationFile: false
  path: String/RollingHash.cpp
  requiredBy: []
  timestamp: '2020-12-30 21:28:36+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - Test/AOJ/RollingHash.test.cpp
documentation_of: String/RollingHash.cpp
layout: document
redirect_from:
- /library/String/RollingHash.cpp
- /library/String/RollingHash.cpp.html
title: String/RollingHash.cpp
---
