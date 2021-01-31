---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: String/RollingHash.cpp
    title: String/RollingHash.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_14_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_14_B
  bundledCode: "#line 1 \"Test/AOJ/RollingHash.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_14_B\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n#line 1 \"String/RollingHash.cpp\"\
    \ntemplate <typename T, T mod, T base>\nclass RollingHash {\n\tvector<T> hash,\
    \ power;\n\n\tpublic:\n\tRollingHash(string &s) {\n\t\tint n = s.size();\n\t\t\
    hash.assign(n+1, 0);\n\t\tpower.assign(n+1, 1);\n\t\tfor(int i = 0; i < n; i++)\
    \ {\n\t\t\thash[i+1] = (hash[i] * base + s[i]) % mod;\n\t\t\tpower[i+1] = power[i]\
    \ * base % mod;\n\t\t}\n\t}\n\n\t// get value of [l, r)\n\tT get(int l, int r)\
    \ {\n\t\tint ret = hash[r] + mod - (hash[l] * power[r - l]) % mod;\n\t\tif(ret\
    \ >= mod) ret -= mod;\n\t\treturn ret;\n\t}\n\n\toperator T() {\n\t\treturn hash.back();\n\
    \t}\n};\n#line 6 \"Test/AOJ/RollingHash.test.cpp\"\ntypedef long long ll;\n\n\
    int main() {\n\tstring t, p;\n\tcin >> t >> p;\n\tif(t.size() < p.size()) return\
    \ 0;\n\tRollingHash<ll, 1000000007, 1777771> rt(t), rp(p);\n\tfor(int i = 0; i\
    \ < t.size() - p.size() + 1; i++) {\n\t\tif(rt.get(i, i + p.size()) == rp) cout\
    \ << i << endl;\n\t}\n\treturn 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_14_B\"\n\
    \n#include <bits/stdc++.h>\nusing namespace std;\n#include \"../../String/RollingHash.cpp\"\
    \ntypedef long long ll;\n\nint main() {\n\tstring t, p;\n\tcin >> t >> p;\n\t\
    if(t.size() < p.size()) return 0;\n\tRollingHash<ll, 1000000007, 1777771> rt(t),\
    \ rp(p);\n\tfor(int i = 0; i < t.size() - p.size() + 1; i++) {\n\t\tif(rt.get(i,\
    \ i + p.size()) == rp) cout << i << endl;\n\t}\n\treturn 0;\n}"
  dependsOn:
  - String/RollingHash.cpp
  isVerificationFile: true
  path: Test/AOJ/RollingHash.test.cpp
  requiredBy: []
  timestamp: '2020-12-30 21:52:41+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Test/AOJ/RollingHash.test.cpp
layout: document
redirect_from:
- /verify/Test/AOJ/RollingHash.test.cpp
- /verify/Test/AOJ/RollingHash.test.cpp.html
title: Test/AOJ/RollingHash.test.cpp
---
