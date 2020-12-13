---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Test/BinaryIndexedTree.test.cpp
    title: Test/BinaryIndexedTree.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"DataStructure/BinaryIndexedTree.cpp\"\ntemplate<class T\
    \ = int>\nstruct BinaryIndexedTree {\n\tint N;\n\tvector<T> bit;\n\n\tBinaryIndexedTree()\
    \ : N(0) {}\n\tBinaryIndexedTree(int n) : N(n), bit(N + 1, 0) {}\n\tBinaryIndexedTree(int\
    \ n, T init) : N(n), bit(N + 1, init) {}\n\n\tvoid add(int pos, T x) {\n\t\tpos++;\n\
    \t\twhile(pos <= N) {\n\t\t\tbit[pos] += x;\n\t\t\tpos += pos & -pos;\n\t\t}\n\
    \t}\n\n\tT sum(int pos) {\n\t\tT ret = 0;\n\t\twhile(pos > 0) {\n\t\t\tret +=\
    \ bit[pos];\n\t\t\tpos -= pos & -pos;\n\t\t}\n\t\treturn ret;\n\t}\n\n\tT sum(int\
    \ l, int r) {\n\t\treturn sum(r) - sum(l);\n\t}\n\n\tconst T& operator[](const\
    \ int &pos) const {\n\t\treturn bit[pos];\n\t}\n};\n"
  code: "template<class T = int>\nstruct BinaryIndexedTree {\n\tint N;\n\tvector<T>\
    \ bit;\n\n\tBinaryIndexedTree() : N(0) {}\n\tBinaryIndexedTree(int n) : N(n),\
    \ bit(N + 1, 0) {}\n\tBinaryIndexedTree(int n, T init) : N(n), bit(N + 1, init)\
    \ {}\n\n\tvoid add(int pos, T x) {\n\t\tpos++;\n\t\twhile(pos <= N) {\n\t\t\t\
    bit[pos] += x;\n\t\t\tpos += pos & -pos;\n\t\t}\n\t}\n\n\tT sum(int pos) {\n\t\
    \tT ret = 0;\n\t\twhile(pos > 0) {\n\t\t\tret += bit[pos];\n\t\t\tpos -= pos &\
    \ -pos;\n\t\t}\n\t\treturn ret;\n\t}\n\n\tT sum(int l, int r) {\n\t\treturn sum(r)\
    \ - sum(l);\n\t}\n\n\tconst T& operator[](const int &pos) const {\n\t\treturn\
    \ bit[pos];\n\t}\n};"
  dependsOn: []
  isVerificationFile: false
  path: DataStructure/BinaryIndexedTree.cpp
  requiredBy: []
  timestamp: '2020-12-13 19:08:54+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Test/BinaryIndexedTree.test.cpp
documentation_of: DataStructure/BinaryIndexedTree.cpp
layout: document
redirect_from:
- /library/DataStructure/BinaryIndexedTree.cpp
- /library/DataStructure/BinaryIndexedTree.cpp.html
title: DataStructure/BinaryIndexedTree.cpp
---
