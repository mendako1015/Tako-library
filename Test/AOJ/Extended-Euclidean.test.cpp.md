---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Mathmatics/Extended-Euclidean.cpp
    title: Mathmatics/Extended-Euclidean.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_E
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_E
  bundledCode: "#line 1 \"Test/AOJ/Extended-Euclidean.test.cpp\"\n#define PROBLEM\
    \ \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_E\"\n\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n#line 1 \"Mathmatics/Extended-Euclidean.cpp\"\
    \ntemplate<typename T>\nT extgcd(T a, T b, T &x, T &y) {\n\tT d = a;\n\tif(b !=\
    \ 0) {\n\t\td = extgcd(b, a % b, y, x);\n\t\ty -= (a / b) * x;\n\t} else {\n\t\
    \tx = 1;\n\t\ty = 0;\n\t}\n\treturn d;\n}\n#line 6 \"Test/AOJ/Extended-Euclidean.test.cpp\"\
    \ntypedef long long ll;\n\nint main() {\n\tint a, b, x, y;\n\tcin >> a >> b;\n\
    \textgcd(a, b, x, y);\n\tcout << x << \" \" << y << endl;\n\treturn 0;\n}\n"
  code: "#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_E\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n#include \"../../Mathmatics/Extended-Euclidean.cpp\"\
    \ntypedef long long ll;\n\nint main() {\n\tint a, b, x, y;\n\tcin >> a >> b;\n\
    \textgcd(a, b, x, y);\n\tcout << x << \" \" << y << endl;\n\treturn 0;\n}"
  dependsOn:
  - Mathmatics/Extended-Euclidean.cpp
  isVerificationFile: true
  path: Test/AOJ/Extended-Euclidean.test.cpp
  requiredBy: []
  timestamp: '2021-03-01 21:54:44+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Test/AOJ/Extended-Euclidean.test.cpp
layout: document
redirect_from:
- /verify/Test/AOJ/Extended-Euclidean.test.cpp
- /verify/Test/AOJ/Extended-Euclidean.test.cpp.html
title: Test/AOJ/Extended-Euclidean.test.cpp
---
