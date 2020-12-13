---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Mathmatics/divisor_enumeration.cpp\"\nvector<int> divisor(int\
    \ n) {\n\tvector<int> ret;\n\tfor(int i = 1; i * i <= n; i++) {\n\t\tif(n % i\
    \ == 0) {\n\t\t\tret.push_back(i);\n\t\t\tif(n / i != i) ret.push_back(n/i);\n\
    \        }\n    }\n\tsort(ret.begin(), ret.end());\n\treturn ret;\n}\n"
  code: "vector<int> divisor(int n) {\n\tvector<int> ret;\n\tfor(int i = 1; i * i\
    \ <= n; i++) {\n\t\tif(n % i == 0) {\n\t\t\tret.push_back(i);\n\t\t\tif(n / i\
    \ != i) ret.push_back(n/i);\n        }\n    }\n\tsort(ret.begin(), ret.end());\n\
    \treturn ret;\n}"
  dependsOn: []
  isVerificationFile: false
  path: Mathmatics/divisor_enumeration.cpp
  requiredBy: []
  timestamp: '2020-12-13 12:10:51+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Mathmatics/divisor_enumeration.cpp
layout: document
redirect_from:
- /library/Mathmatics/divisor_enumeration.cpp
- /library/Mathmatics/divisor_enumeration.cpp.html
title: Mathmatics/divisor_enumeration.cpp
---
