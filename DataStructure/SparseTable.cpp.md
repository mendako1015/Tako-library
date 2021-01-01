---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Test/yosupo-judge/SparseTable-StaticRMQ.test.cpp
    title: Test/yosupo-judge/SparseTable-StaticRMQ.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"DataStructure/SparseTable.cpp\"\ntemplate<typename T>\n\
    class SparseTable {\n\tvector<vector<T>> table;\n\tvector<int> lookup;\n\tfunction<T(T,\
    \ T)> operation;\n\n\tpublic:\n\tSparseTable(const vector<T> &v, function<T(T,\
    \ T)> ope): operation(ope) {\n\t\tint log_len = 0;\n\t\twhile((1 << log_len) <=\
    \ v.size()) ++log_len;\n\t\ttable = vector<vector<T>>(log_len, vector<int>(1 <<\
    \ log_len));\n\t\tlookup = vector<int>(v.size() + 1);\n\n\t\tfor(int i = 0; i\
    \ < v.size(); i++) {\n\t\t\ttable[0][i] = v[i];\n\t\t}\n\t\tfor(int i = 1; i <\
    \ log_len; i++) {\n\t\t\tfor(int j = 0; j + (1 << i) <= (1 << log_len); j++) {\n\
    \t\t\t\ttable[i][j] = operation(table[i-1][j], table[i - 1][j + (1 << (i - 1))]);\n\
    \t\t\t}\n\t\t}\n\t\tfor(int i = 2; i < lookup.size(); i++) {\n\t\t\tlookup[i]\
    \ = lookup[i >> 1] + 1;\n\t\t}\n\t}\n\n\tinline T query(int l, int r) {\n\t\t\
    int b = lookup[r - l];\n\t\treturn operation(table[b][l], table[b][r - (1 << b)]);\n\
    \t}\n};\n"
  code: "template<typename T>\nclass SparseTable {\n\tvector<vector<T>> table;\n\t\
    vector<int> lookup;\n\tfunction<T(T, T)> operation;\n\n\tpublic:\n\tSparseTable(const\
    \ vector<T> &v, function<T(T, T)> ope): operation(ope) {\n\t\tint log_len = 0;\n\
    \t\twhile((1 << log_len) <= v.size()) ++log_len;\n\t\ttable = vector<vector<T>>(log_len,\
    \ vector<int>(1 << log_len));\n\t\tlookup = vector<int>(v.size() + 1);\n\n\t\t\
    for(int i = 0; i < v.size(); i++) {\n\t\t\ttable[0][i] = v[i];\n\t\t}\n\t\tfor(int\
    \ i = 1; i < log_len; i++) {\n\t\t\tfor(int j = 0; j + (1 << i) <= (1 << log_len);\
    \ j++) {\n\t\t\t\ttable[i][j] = operation(table[i-1][j], table[i - 1][j + (1 <<\
    \ (i - 1))]);\n\t\t\t}\n\t\t}\n\t\tfor(int i = 2; i < lookup.size(); i++) {\n\t\
    \t\tlookup[i] = lookup[i >> 1] + 1;\n\t\t}\n\t}\n\n\tinline T query(int l, int\
    \ r) {\n\t\tint b = lookup[r - l];\n\t\treturn operation(table[b][l], table[b][r\
    \ - (1 << b)]);\n\t}\n};"
  dependsOn: []
  isVerificationFile: false
  path: DataStructure/SparseTable.cpp
  requiredBy: []
  timestamp: '2021-01-02 00:55:12+09:00'
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
