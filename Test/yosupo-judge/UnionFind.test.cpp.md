---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: DataStructure/UnionFind.cpp
    title: DataStructure/UnionFind.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/unionfind
    links:
    - https://judge.yosupo.jp/problem/unionfind
  bundledCode: "#line 1 \"Test/yosupo-judge/UnionFind.test.cpp\"\n#define PROBLEM\
    \ \"https://judge.yosupo.jp/problem/unionfind\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n#line 1 \"DataStructure/UnionFind.cpp\"\ntemplate<class\
    \ T = int>\nstruct UnionFind {\n\tvector<T> par;\n\tvector<int> size;\n\n\tUnionFind(int\
    \ n): par(n, -1), size(n, 1) {}\n\n\tvoid unite(int x, int y) {\n\t\tx = root(x),\
    \ y = root(y);\n\t\tif(x == y) return ;\n\t\tif(size[x] < size[y]) swap(x, y);\n\
    \t\tpar[y] = x;\n\t\tsize[x] = size[y] = size[x] + size[y];\n\t}\n\n\tint root(int\
    \ x) {\n\t\tif(par[x] < 0) return x;\n\t\treturn (par[x] = root(par[x]));\n\t\
    }\n\n\tbool same(int x, int y) {\n\t\treturn root(x) == root(y);\n\t}\n\n\tint\
    \ getsize(int x) {\n\t\treturn size[root(x)];\n\t}\n};\n#line 6 \"Test/yosupo-judge/UnionFind.test.cpp\"\
    \n\n\nint main() {\n\tint n, q;\n\tcin >> n >> q;\n\tUnionFind<int> ut(n);\n\t\
    for(int i = 0; i < q; i++) {\n\t\tint t, u, v;\n\t\tcin >> t >> u >> v;\n\t\t\
    if(t == 0) ut.unite(u, v);\n\t\telse cout << ut.same(u, v) << endl;\n\t}\n\treturn\
    \ 0;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\n\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n#include \"../../DataStructure/UnionFind.cpp\"\
    \n\n\nint main() {\n\tint n, q;\n\tcin >> n >> q;\n\tUnionFind<int> ut(n);\n\t\
    for(int i = 0; i < q; i++) {\n\t\tint t, u, v;\n\t\tcin >> t >> u >> v;\n\t\t\
    if(t == 0) ut.unite(u, v);\n\t\telse cout << ut.same(u, v) << endl;\n\t}\n\treturn\
    \ 0;\n}"
  dependsOn:
  - DataStructure/UnionFind.cpp
  isVerificationFile: true
  path: Test/yosupo-judge/UnionFind.test.cpp
  requiredBy: []
  timestamp: '2021-01-04 00:42:41+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Test/yosupo-judge/UnionFind.test.cpp
layout: document
redirect_from:
- /verify/Test/yosupo-judge/UnionFind.test.cpp
- /verify/Test/yosupo-judge/UnionFind.test.cpp.html
title: Test/yosupo-judge/UnionFind.test.cpp
---
