---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Test/AOJ/Extended-Euclidean.test.cpp
    title: Test/AOJ/Extended-Euclidean.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Mathmatics/Extended-Euclidean.cpp\"\ntemplate<typename T>\n\
    T extgcd(T a, T b, T &x, T &y) {\n\tT d = a;\n\tif(b != 0) {\n\t\td = extgcd(b,\
    \ a % b, y, x);\n\t\ty -= (a / b) * x;\n\t} else {\n\t\tx = 1;\n\t\ty = 0;\n\t\
    }\n\treturn d;\n}\n"
  code: "template<typename T>\nT extgcd(T a, T b, T &x, T &y) {\n\tT d = a;\n\tif(b\
    \ != 0) {\n\t\td = extgcd(b, a % b, y, x);\n\t\ty -= (a / b) * x;\n\t} else {\n\
    \t\tx = 1;\n\t\ty = 0;\n\t}\n\treturn d;\n}"
  dependsOn: []
  isVerificationFile: false
  path: Mathmatics/Extended-Euclidean.cpp
  requiredBy: []
  timestamp: '2021-03-01 08:33:22+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Test/AOJ/Extended-Euclidean.test.cpp
documentation_of: Mathmatics/Extended-Euclidean.cpp
layout: document
redirect_from:
- /library/Mathmatics/Extended-Euclidean.cpp
- /library/Mathmatics/Extended-Euclidean.cpp.html
title: Mathmatics/Extended-Euclidean.cpp
---
