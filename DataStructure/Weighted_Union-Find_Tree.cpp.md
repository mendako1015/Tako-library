---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"DataStructure/Weighted_Union-Find_Tree.cpp\"\nstruct UnionFind\
    \ {\n    vector<int> par; // \u89AA\u30CE\u30FC\u30C9\n    vector<int> rank; //\
    \ \u30E9\u30F3\u30AF\n\n    UnionFind(int n = 1) {\n        init(n);\n    }\n\n\
    \    void init(int n = 1) {\n        par.resize(n); rank.resize(n);\n        for\
    \ (int i = 0; i < n; ++i) par[i] = i, rank[i] = 0;\n    }\n\n    int root(int\
    \ x) {\n        if (par[x] == x) {\n            return x;\n        }\n       \
    \ else {\n            int r = root(par[x]);\n            return par[x] = r;\n\
    \        }\n    }\n\n    bool issame(int x, int y) {\n        return root(x) ==\
    \ root(y);\n    }\n\n    bool unite(int x, int y) {\n        x = root(x); y =\
    \ root(y);\n        if (x == y) return false;\n        if (rank[x] < rank[y])\
    \ swap(x, y);\n        if (rank[x] == rank[y]) ++rank[x];\n        par[y] = x;\n\
    \        return true;\n    }\n};\n"
  code: "struct UnionFind {\n    vector<int> par; // \u89AA\u30CE\u30FC\u30C9\n  \
    \  vector<int> rank; // \u30E9\u30F3\u30AF\n\n    UnionFind(int n = 1) {\n   \
    \     init(n);\n    }\n\n    void init(int n = 1) {\n        par.resize(n); rank.resize(n);\n\
    \        for (int i = 0; i < n; ++i) par[i] = i, rank[i] = 0;\n    }\n\n    int\
    \ root(int x) {\n        if (par[x] == x) {\n            return x;\n        }\n\
    \        else {\n            int r = root(par[x]);\n            return par[x]\
    \ = r;\n        }\n    }\n\n    bool issame(int x, int y) {\n        return root(x)\
    \ == root(y);\n    }\n\n    bool unite(int x, int y) {\n        x = root(x); y\
    \ = root(y);\n        if (x == y) return false;\n        if (rank[x] < rank[y])\
    \ swap(x, y);\n        if (rank[x] == rank[y]) ++rank[x];\n        par[y] = x;\n\
    \        return true;\n    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: DataStructure/Weighted_Union-Find_Tree.cpp
  requiredBy: []
  timestamp: '2020-12-05 06:50:48+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: DataStructure/Weighted_Union-Find_Tree.cpp
layout: document
redirect_from:
- /library/DataStructure/Weighted_Union-Find_Tree.cpp
- /library/DataStructure/Weighted_Union-Find_Tree.cpp.html
title: DataStructure/Weighted_Union-Find_Tree.cpp
---
