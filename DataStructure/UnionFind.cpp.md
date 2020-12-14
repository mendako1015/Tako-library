---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Test/UnionFind.test.cpp
    title: Test/UnionFind.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"DataStructure/UnionFind.cpp\"\ntemplate<class T = int>\n\
    struct UnionFind {\n    vector<T> data;\n\n    UnionFind(int size): data(size,\
    \ -1) {}\n\n    void unite(int x, int y) {\n        x = root(x), y = root(y);\n\
    \        if(x == y) return ;\n        if(data[x] > data[y]) swap(x, y);\n    \
    \    data[x] += data[y];\n        data[y] = x;\n    }\n\n    int root(int x) {\n\
    \        if(data[x] < 0) return x;\n        return (data[x] = root(data[x]));\n\
    \    }\n\n    bool same(int x, int y) {\n        return root(x) == root(y);\n\
    \    }\n};\n"
  code: "template<class T = int>\nstruct UnionFind {\n    vector<T> data;\n\n    UnionFind(int\
    \ size): data(size, -1) {}\n\n    void unite(int x, int y) {\n        x = root(x),\
    \ y = root(y);\n        if(x == y) return ;\n        if(data[x] > data[y]) swap(x,\
    \ y);\n        data[x] += data[y];\n        data[y] = x;\n    }\n\n    int root(int\
    \ x) {\n        if(data[x] < 0) return x;\n        return (data[x] = root(data[x]));\n\
    \    }\n\n    bool same(int x, int y) {\n        return root(x) == root(y);\n\
    \    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: DataStructure/UnionFind.cpp
  requiredBy: []
  timestamp: '2020-12-15 01:08:12+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Test/UnionFind.test.cpp
documentation_of: DataStructure/UnionFind.cpp
layout: document
redirect_from:
- /library/DataStructure/UnionFind.cpp
- /library/DataStructure/UnionFind.cpp.html
title: DataStructure/UnionFind.cpp
---
