---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Test/WeighedUnionFind.test.cpp
    title: Test/WeighedUnionFind.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"DataStructure/WeightedUnionFind.cpp\"\ntemplate <typename\
    \ T>\nstruct WeightedUnionFind {\n    T d;\n    vector<int> r, p;\n    vector<T>\
    \ ws;\n\n    WeightedUnionFind() {}\n    WeightedUnionFind(int n, T d) : d(d),\
    \ p(n), r(n, 1), ws(n, d) {\n        for(int i = 0; i < n; i++) p[i] = i;\n  \
    \  }\n\n    int root(int x) {\n        if(x == p[x]) return x;\n        int t\
    \ = root(p[x]);\n        ws[x] += ws[p[x]];\n        return p[x] = t;\n    }\n\
    \n    T weight(int x) {\n        root(x);\n        return ws[x];\n    }\n\n  \
    \  bool same(int x, int y) {\n        return root(x) == root(y);\n    }\n\n  \
    \  void unite(int x, int y, T w) {\n        w += weight(x);\n        w -= weight(y);\n\
    \        x = root(x); y = root(y);\n        if(x == y) return ;\n        if(r[x]\
    \ < r[y]) std::swap(x, y), w = -w;\n        r[x] += r[y];\n        p[y] = x;\n\
    \        ws[y] = w;\n    }\n\n    T diff(int x,int y) {\n        return weight(y)\
    \ - weight(x);\n    }\n};\n"
  code: "template <typename T>\nstruct WeightedUnionFind {\n    T d;\n    vector<int>\
    \ r, p;\n    vector<T> ws;\n\n    WeightedUnionFind() {}\n    WeightedUnionFind(int\
    \ n, T d) : d(d), p(n), r(n, 1), ws(n, d) {\n        for(int i = 0; i < n; i++)\
    \ p[i] = i;\n    }\n\n    int root(int x) {\n        if(x == p[x]) return x;\n\
    \        int t = root(p[x]);\n        ws[x] += ws[p[x]];\n        return p[x]\
    \ = t;\n    }\n\n    T weight(int x) {\n        root(x);\n        return ws[x];\n\
    \    }\n\n    bool same(int x, int y) {\n        return root(x) == root(y);\n\
    \    }\n\n    void unite(int x, int y, T w) {\n        w += weight(x);\n     \
    \   w -= weight(y);\n        x = root(x); y = root(y);\n        if(x == y) return\
    \ ;\n        if(r[x] < r[y]) std::swap(x, y), w = -w;\n        r[x] += r[y];\n\
    \        p[y] = x;\n        ws[y] = w;\n    }\n\n    T diff(int x,int y) {\n \
    \       return weight(y) - weight(x);\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: DataStructure/WeightedUnionFind.cpp
  requiredBy: []
  timestamp: '2020-12-13 20:40:04+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Test/WeighedUnionFind.test.cpp
documentation_of: DataStructure/WeightedUnionFind.cpp
layout: document
redirect_from:
- /library/DataStructure/WeightedUnionFind.cpp
- /library/DataStructure/WeightedUnionFind.cpp.html
title: DataStructure/WeightedUnionFind.cpp
---
