---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Graph/Kruskal.cpp\"\nconst int MAX_E = ; // \u8FBA\u306E\
    \u6570\n\nstruct UnionFind {\n    vector<int> par;\n\n    UnionFind(int N) : par(N)\
    \ {\n        for(int i = 0; i < N; i++) par[i] = i;\n    }\n\n    int root(int\
    \ x) {\n        if (par[x] == x) return x;\n        return par[x] = root(par[x]);\n\
    \    }\n\n    void unite(int x, int y) {\n        int rx = root(x);\n        int\
    \ ry = root(y);\n        if (rx == ry) return;\n        par[rx] = ry;\n    }\n\
    \n    bool same(int x, int y) {\n        int rx = root(x);\n        int ry = root(y);\n\
    \        return rx == ry;\n    }\n};\n\nstruct edge {\n  int u, v, cost;\n};\n\
    \nbool comp(const edge& e1, const edge& e2) {\n  return e1.cost < e2.cost;\n}\n\
    \nedge es[MAX_E];\nint V, E;\n\nint kruskal() {\n  sort(es, es + E, comp);\n \
    \ UnionFind ut(V);\n\n  int res = 0;\n  for(int i = 0; i < E; i++) {\n    edge\
    \ e = es[i];\n    if(!same(e.u, e.v)) {\n      unite(e.u, e.v);\n      res +=\
    \ e.cost;\n    }\n  }\n  return res;\n}\n"
  code: "const int MAX_E = ; // \u8FBA\u306E\u6570\n\nstruct UnionFind {\n    vector<int>\
    \ par;\n\n    UnionFind(int N) : par(N) {\n        for(int i = 0; i < N; i++)\
    \ par[i] = i;\n    }\n\n    int root(int x) {\n        if (par[x] == x) return\
    \ x;\n        return par[x] = root(par[x]);\n    }\n\n    void unite(int x, int\
    \ y) {\n        int rx = root(x);\n        int ry = root(y);\n        if (rx ==\
    \ ry) return;\n        par[rx] = ry;\n    }\n\n    bool same(int x, int y) {\n\
    \        int rx = root(x);\n        int ry = root(y);\n        return rx == ry;\n\
    \    }\n};\n\nstruct edge {\n  int u, v, cost;\n};\n\nbool comp(const edge& e1,\
    \ const edge& e2) {\n  return e1.cost < e2.cost;\n}\n\nedge es[MAX_E];\nint V,\
    \ E;\n\nint kruskal() {\n  sort(es, es + E, comp);\n  UnionFind ut(V);\n\n  int\
    \ res = 0;\n  for(int i = 0; i < E; i++) {\n    edge e = es[i];\n    if(!same(e.u,\
    \ e.v)) {\n      unite(e.u, e.v);\n      res += e.cost;\n    }\n  }\n  return\
    \ res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: Graph/Kruskal.cpp
  requiredBy: []
  timestamp: '2020-12-05 06:50:48+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Graph/Kruskal.cpp
layout: document
redirect_from:
- /library/Graph/Kruskal.cpp
- /library/Graph/Kruskal.cpp.html
title: Graph/Kruskal.cpp
---
