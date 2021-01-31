---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Test/yosupo-judge/UnionFind.test.cpp
    title: Test/yosupo-judge/UnionFind.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"DataStructure/UnionFind.cpp\"\ntemplate<class T = int>\n\
    struct UnionFind {\n\tvector<T> par;\n\tvector<int> size;\n\n\tUnionFind(int n):\
    \ par(n, -1), size(n, 1) {}\n\n\tvoid unite(int x, int y) {\n\t\tx = root(x),\
    \ y = root(y);\n\t\tif(x == y) return ;\n\t\tif(size[x] < size[y]) swap(x, y);\n\
    \t\tpar[y] = x;\n\t\tsize[x] = size[y] = size[x] + size[y];\n\t}\n\n\tint root(int\
    \ x) {\n\t\tif(par[x] < 0) return x;\n\t\treturn (par[x] = root(par[x]));\n\t\
    }\n\n\tbool same(int x, int y) {\n\t\treturn root(x) == root(y);\n\t}\n\n\tint\
    \ getsize(int x) {\n\t\treturn size[root(x)];\n\t}\n};\n"
  code: "template<class T = int>\nstruct UnionFind {\n\tvector<T> par;\n\tvector<int>\
    \ size;\n\n\tUnionFind(int n): par(n, -1), size(n, 1) {}\n\n\tvoid unite(int x,\
    \ int y) {\n\t\tx = root(x), y = root(y);\n\t\tif(x == y) return ;\n\t\tif(size[x]\
    \ < size[y]) swap(x, y);\n\t\tpar[y] = x;\n\t\tsize[x] = size[y] = size[x] + size[y];\n\
    \t}\n\n\tint root(int x) {\n\t\tif(par[x] < 0) return x;\n\t\treturn (par[x] =\
    \ root(par[x]));\n\t}\n\n\tbool same(int x, int y) {\n\t\treturn root(x) == root(y);\n\
    \t}\n\n\tint getsize(int x) {\n\t\treturn size[root(x)];\n\t}\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: DataStructure/UnionFind.cpp
  requiredBy: []
  timestamp: '2021-01-04 00:42:41+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Test/yosupo-judge/UnionFind.test.cpp
documentation_of: DataStructure/UnionFind.cpp
layout: document
redirect_from:
- /library/DataStructure/UnionFind.cpp
- /library/DataStructure/UnionFind.cpp.html
title: DataStructure/UnionFind.cpp
---
