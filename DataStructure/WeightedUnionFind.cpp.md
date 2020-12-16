---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"DataStructure/WeightedUnionFind.cpp\"\ntemplate <typename\
    \ T>\nstruct WeightedUnionFind {\n\tT d;\n\tvector<int> r, p;\n\tvector<T> ws;\n\
    \n\tWeightedUnionFind() {}\n\tWeightedUnionFind(int n, T d) : d(d), p(n), r(n,\
    \ 1), ws(n, d) {\n\t\tfor(int i = 0; i < n; i++) p[i] = i;\n\t}\n\n\tint root(int\
    \ x) {\n\t\tif(x == p[x]) return x;\n\t\tint t = root(p[x]);\n\t\tws[x] += ws[p[x]];\n\
    \t\treturn p[x] = t;\n\t}\n\n\tT weight(int x) {\n\t\troot(x);\n\t\treturn ws[x];\n\
    \t}\n\n\tbool same(int x, int y) {\n\t\treturn root(x) == root(y);\n\t}\n\n\t\
    void unite(int x, int y, T w) {\n\t\tw += weight(x);\n\t\tw -= weight(y);\n\t\t\
    x = root(x); y = root(y);\n\t\tif(x == y) return ;\n\t\tif(r[x] < r[y]) std::swap(x,\
    \ y), w = -w;\n\t\tr[x] += r[y];\n\t\tp[y] = x;\n\t\tws[y] = w;\n\t}\n\n\tT diff(int\
    \ x,int y) {\n\t\treturn weight(y) - weight(x);\n\t}\n};\n"
  code: "template <typename T>\nstruct WeightedUnionFind {\n\tT d;\n\tvector<int>\
    \ r, p;\n\tvector<T> ws;\n\n\tWeightedUnionFind() {}\n\tWeightedUnionFind(int\
    \ n, T d) : d(d), p(n), r(n, 1), ws(n, d) {\n\t\tfor(int i = 0; i < n; i++) p[i]\
    \ = i;\n\t}\n\n\tint root(int x) {\n\t\tif(x == p[x]) return x;\n\t\tint t = root(p[x]);\n\
    \t\tws[x] += ws[p[x]];\n\t\treturn p[x] = t;\n\t}\n\n\tT weight(int x) {\n\t\t\
    root(x);\n\t\treturn ws[x];\n\t}\n\n\tbool same(int x, int y) {\n\t\treturn root(x)\
    \ == root(y);\n\t}\n\n\tvoid unite(int x, int y, T w) {\n\t\tw += weight(x);\n\
    \t\tw -= weight(y);\n\t\tx = root(x); y = root(y);\n\t\tif(x == y) return ;\n\t\
    \tif(r[x] < r[y]) std::swap(x, y), w = -w;\n\t\tr[x] += r[y];\n\t\tp[y] = x;\n\
    \t\tws[y] = w;\n\t}\n\n\tT diff(int x,int y) {\n\t\treturn weight(y) - weight(x);\n\
    \t}\n};"
  dependsOn: []
  isVerificationFile: false
  path: DataStructure/WeightedUnionFind.cpp
  requiredBy: []
  timestamp: '2020-12-15 01:38:01+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: DataStructure/WeightedUnionFind.cpp
layout: document
redirect_from:
- /library/DataStructure/WeightedUnionFind.cpp
- /library/DataStructure/WeightedUnionFind.cpp.html
title: DataStructure/WeightedUnionFind.cpp
---
