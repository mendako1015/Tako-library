---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"DataStructure/UnionFind.cpp\"\ntemplate<class T = int>\n\
    struct UnionFind {\n\tvector<T> data;\n\n\tUnionFind(int size): data(size, -1)\
    \ {}\n\n\tvoid unite(int x, int y) {\n\t\tx = root(x), y = root(y);\n\t\tif(x\
    \ == y) return ;\n\t\tif(data[x] > data[y]) swap(x, y);\n\t\tdata[x] += data[y];\n\
    \t\tdata[y] = x;\n\t}\n\n\tint root(int x) {\n\t\tif(data[x] < 0) return x;\n\t\
    \treturn (data[x] = root(data[x]));\n\t}\n\n\tbool same(int x, int y) {\n\t\t\
    return root(x) == root(y);\n\t}\n};\n"
  code: "template<class T = int>\nstruct UnionFind {\n\tvector<T> data;\n\n\tUnionFind(int\
    \ size): data(size, -1) {}\n\n\tvoid unite(int x, int y) {\n\t\tx = root(x), y\
    \ = root(y);\n\t\tif(x == y) return ;\n\t\tif(data[x] > data[y]) swap(x, y);\n\
    \t\tdata[x] += data[y];\n\t\tdata[y] = x;\n\t}\n\n\tint root(int x) {\n\t\tif(data[x]\
    \ < 0) return x;\n\t\treturn (data[x] = root(data[x]));\n\t}\n\n\tbool same(int\
    \ x, int y) {\n\t\treturn root(x) == root(y);\n\t}\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: DataStructure/UnionFind.cpp
  requiredBy: []
  timestamp: '2020-12-15 01:38:01+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: DataStructure/UnionFind.cpp
layout: document
redirect_from:
- /library/DataStructure/UnionFind.cpp
- /library/DataStructure/UnionFind.cpp.html
title: DataStructure/UnionFind.cpp
---
