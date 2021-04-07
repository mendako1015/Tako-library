---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Test/yosupo-judge/SparseTable-StaticRMQ.test.cpp
    title: Test/yosupo-judge/SparseTable-StaticRMQ.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"DataStructure/SparseTable.cpp\"\ntemplate<typename T>\n\
    class SparseTable {\n    vector<vector<T>> table;\n\n    public:\n    SparseTable(vector<T>\
    \ &a) {\n        int len = a.size();\n        table = vector<vector<T>>(log2(len)\
    \ + 1, vector<T>(len + 1));\n        for(int i = 0; i < len; i++) {\n        \
    \    table[0][i + 1] = a[i];\n        }\n        // build\n        for(int j =\
    \ 1; j < (int)(log2(len) + 1); j++) {\n            for(int i = 1; i + (1 << j)\
    \ - 1 <= len; i++) {\n                table[j][i] = min(table[j - 1][i], table[j\
    \ - 1][i + (1 << (j - 1))]);\n            }\n        }\n    }\n\n    T query(int\
    \ l, int r) {\n\t\tl++;\n        int d = log2(r - l + 1);\n        return min(table[d][l],\
    \ table[d][r - (1 << d) + 1]);\n    }\n};\n"
  code: "template<typename T>\nclass SparseTable {\n    vector<vector<T>> table;\n\
    \n    public:\n    SparseTable(vector<T> &a) {\n        int len = a.size();\n\
    \        table = vector<vector<T>>(log2(len) + 1, vector<T>(len + 1));\n     \
    \   for(int i = 0; i < len; i++) {\n            table[0][i + 1] = a[i];\n    \
    \    }\n        // build\n        for(int j = 1; j < (int)(log2(len) + 1); j++)\
    \ {\n            for(int i = 1; i + (1 << j) - 1 <= len; i++) {\n            \
    \    table[j][i] = min(table[j - 1][i], table[j - 1][i + (1 << (j - 1))]);\n \
    \           }\n        }\n    }\n\n    T query(int l, int r) {\n\t\tl++;\n   \
    \     int d = log2(r - l + 1);\n        return min(table[d][l], table[d][r - (1\
    \ << d) + 1]);\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: DataStructure/SparseTable.cpp
  requiredBy: []
  timestamp: '2021-04-07 08:58:16+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Test/yosupo-judge/SparseTable-StaticRMQ.test.cpp
documentation_of: DataStructure/SparseTable.cpp
layout: document
redirect_from:
- /library/DataStructure/SparseTable.cpp
- /library/DataStructure/SparseTable.cpp.html
title: DataStructure/SparseTable.cpp
---
