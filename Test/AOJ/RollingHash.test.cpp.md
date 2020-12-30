---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: String/RollingHash.cpp
    title: String/RollingHash.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/14/ALDS1_14_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/14/ALDS1_14_B
  bundledCode: "#line 1 \"Test/AOJ/RollingHash.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/14/ALDS1_14_B\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n#line 1 \"String/RollingHash.cpp\"\
    \ntemplate <typename T, T mod, T base>\nclass RollingHash {\n\tvector<T> hash,\
    \ power;\n\n\tpublic:\n\tRollingHash(string &s) {\n\t\tint n = s.size();\n\t\t\
    hash.assign(n+1, 0);\n\t\tpower.assign(n+1, 1);\n\t\tfor(int i = 0; i < n; i++)\
    \ {\n\t\t\thash[i+1] = (hash[i] * base + s[i]) % mod;\n\t\t\tpower[i+1] = power[i]\
    \ * base % mod;\n\t\t}\n\t}\n\n\t// get value of [l, r)\n\tT get(int l, int r)\
    \ {\n\t\tint ret = hash[r] + mod - (hash[l] * power[r - l]) % mod;\n\t\tif(ret\
    \ >= mod) ret -= mod;\n\t\treturn ret;\n\t}\n\n\toperator T() {\n\t\treturn hash.back();\n\
    \t}\n};\n#line 6 \"Test/AOJ/RollingHash.test.cpp\"\ntypedef long long ll;\n\n\
    int main() {\n\n\treturn 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/14/ALDS1_14_B\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n#include \"../../String/RollingHash.cpp\"\
    \ntypedef long long ll;\n\nint main() {\n\n\treturn 0;\n}"
  dependsOn:
  - String/RollingHash.cpp
  isVerificationFile: true
  path: Test/AOJ/RollingHash.test.cpp
  requiredBy: []
  timestamp: '2020-12-30 21:45:34+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: Test/AOJ/RollingHash.test.cpp
layout: document
redirect_from:
- /verify/Test/AOJ/RollingHash.test.cpp
- /verify/Test/AOJ/RollingHash.test.cpp.html
title: Test/AOJ/RollingHash.test.cpp
---
