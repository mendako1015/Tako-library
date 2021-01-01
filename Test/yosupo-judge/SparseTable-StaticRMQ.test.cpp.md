---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: DataStructure/SparseTable.cpp
    title: DataStructure/SparseTable.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/staticrmq
    links:
    - https://judge.yosupo.jp/problem/staticrmq
  bundledCode: "#line 1 \"Test/yosupo-judge/SparseTable-StaticRMQ.test.cpp\"\n#define\
    \ PROBLEM \"https://judge.yosupo.jp/problem/staticrmq\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n#line 1 \"DataStructure/SparseTable.cpp\"\ntemplate<typename\
    \ T>\nclass SparseTable {\n\tvector<vector<T>> table;\n\tvector<int> lookup;\n\
    \tfunction<T(T, T)> operation;\n\n\tpublic:\n\tSparseTable(const vector<T> &v,\
    \ function<T(T, T)> ope): operation(ope) {\n\t\tint log_len = 0;\n\t\twhile((1\
    \ << log_len) <= v.size()) ++log_len;\n\t\ttable = vector<vector<T>>(log_len,\
    \ vector<int>(1 << log_len));\n\t\tlookup = vector<int>(v.size() + 1);\n\n\t\t\
    for(int i = 0; i < v.size(); i++) {\n\t\t\ttable[0][i] = v[i];\n\t\t}\n\t\tfor(int\
    \ i = 1; i < log_len; i++) {\n\t\t\tfor(int j = 0; j + (1 << i) <= (1 << log_len);\
    \ j++) {\n\t\t\t\ttable[i][j] = operation(table[i-1][j], table[i - 1][j + (1 <<\
    \ (i - 1))]);\n\t\t\t}\n\t\t}\n\t\tfor(int i = 2; i < lookup.size(); i++) {\n\t\
    \t\tlookup[i] = lookup[i >> 1] + 1;\n\t\t}\n\t}\n\n\tinline T query(int l, int\
    \ r) {\n\t\tint b = lookup[r - l];\n\t\treturn operation(table[b][l], table[b][r\
    \ - (1 << b)]);\n\t}\n};\n#line 6 \"Test/yosupo-judge/SparseTable-StaticRMQ.test.cpp\"\
    \ntypedef long long ll;\n\nint main() {\n\tint n, q;\n\tcin >> n >> q;\n\tvector<int>\
    \ a(n);\n\tfor(int i = 0; i < n; i++) cin >> a[i];\n\tSparseTable<int> sp(a, [](int\
    \ x, int y) { return min(x, y); });\n\twhile(q--) {\n\t\tint l, r;\n\t\tcin >>\
    \ l >> r;\n\t\tcout << sp.query(l, r) << endl;\n\t}\n\treturn 0;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/staticrmq\"\n\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n#include \"../../DataStructure/SparseTable.cpp\"\
    \ntypedef long long ll;\n\nint main() {\n\tint n, q;\n\tcin >> n >> q;\n\tvector<int>\
    \ a(n);\n\tfor(int i = 0; i < n; i++) cin >> a[i];\n\tSparseTable<int> sp(a, [](int\
    \ x, int y) { return min(x, y); });\n\twhile(q--) {\n\t\tint l, r;\n\t\tcin >>\
    \ l >> r;\n\t\tcout << sp.query(l, r) << endl;\n\t}\n\treturn 0;\n}"
  dependsOn:
  - DataStructure/SparseTable.cpp
  isVerificationFile: true
  path: Test/yosupo-judge/SparseTable-StaticRMQ.test.cpp
  requiredBy: []
  timestamp: '2021-01-02 01:06:13+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Test/yosupo-judge/SparseTable-StaticRMQ.test.cpp
layout: document
redirect_from:
- /verify/Test/yosupo-judge/SparseTable-StaticRMQ.test.cpp
- /verify/Test/yosupo-judge/SparseTable-StaticRMQ.test.cpp.html
title: Test/yosupo-judge/SparseTable-StaticRMQ.test.cpp
---
