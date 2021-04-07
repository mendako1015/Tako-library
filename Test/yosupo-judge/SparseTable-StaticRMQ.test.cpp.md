---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: DataStructure/SparseTable.cpp
    title: DataStructure/SparseTable.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
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
    \ T>\nclass SparseTable {\n    vector<vector<T>> table;\n\n    public:\n    SparseTable(vector<T>\
    \ &a) {\n        int len = a.size();\n        table = vector<vector<T>>(log2(len)\
    \ + 1, vector<T>(len + 1));\n        for(int i = 0; i < len; i++) {\n        \
    \    table[0][i + 1] = a[i];\n        }\n        // build\n        for(int j =\
    \ 1; j < (int)(log2(len) + 1); j++) {\n            for(int i = 1; i + (1 << j)\
    \ - 1 <= len; i++) {\n                table[j][i] = min(table[j - 1][i], table[j\
    \ - 1][i + (1 << (j - 1))]);\n            }\n        }\n    }\n\n    T query(int\
    \ l, int r) {\n\t\tl++;\n        int d = log2(r - l + 1);\n        return min(table[d][l],\
    \ table[d][r - (1 << d) + 1]);\n    }\n};\n#line 6 \"Test/yosupo-judge/SparseTable-StaticRMQ.test.cpp\"\
    \ntypedef long long ll;\n\nint main() {\n\tint n, q;\n\tcin >> n >> q;\n\tvector<int>\
    \ a(n);\n\tfor(int i = 0; i < n; i++) cin >> a[i];\n\tSparseTable<int> sp(a);\n\
    \twhile(q--) {\n\t\tint l, r;\n\t\tcin >> l >> r;\n\t\tcout << sp.query(l, r)\
    \ << endl;\n\t}\n\treturn 0;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/staticrmq\"\n\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n#include \"../../DataStructure/SparseTable.cpp\"\
    \ntypedef long long ll;\n\nint main() {\n\tint n, q;\n\tcin >> n >> q;\n\tvector<int>\
    \ a(n);\n\tfor(int i = 0; i < n; i++) cin >> a[i];\n\tSparseTable<int> sp(a);\n\
    \twhile(q--) {\n\t\tint l, r;\n\t\tcin >> l >> r;\n\t\tcout << sp.query(l, r)\
    \ << endl;\n\t}\n\treturn 0;\n}"
  dependsOn:
  - DataStructure/SparseTable.cpp
  isVerificationFile: true
  path: Test/yosupo-judge/SparseTable-StaticRMQ.test.cpp
  requiredBy: []
  timestamp: '2021-04-07 08:58:16+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Test/yosupo-judge/SparseTable-StaticRMQ.test.cpp
layout: document
redirect_from:
- /verify/Test/yosupo-judge/SparseTable-StaticRMQ.test.cpp
- /verify/Test/yosupo-judge/SparseTable-StaticRMQ.test.cpp.html
title: Test/yosupo-judge/SparseTable-StaticRMQ.test.cpp
---
