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
  bundledCode: "#line 1 \"Test/UnionFind.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n#line 1 \"DataStructure/UnionFind.cpp\"\
    \ntemplate<class T = int>\nstruct UnionFind {\n    vector<T> data;\n\n    UnionFind(int\
    \ size): data(size, -1) {}\n\n    void unite(int x, int y) {\n        x = root(x),\
    \ y = root(y);\n        if(x == y) return ;\n        if(data[x] > data[y]) swap(x,\
    \ y);\n        data[x] += data[y];\n        data[y] = x;\n    }\n\n    int root(int\
    \ x) {\n        if(data[x] < 0) return x;\n        return (data[x] = root(data[x]));\n\
    \    }\n\n    bool same(int x, int y) {\n        return root(x) == root(y);\n\
    \    }\n};\n#line 6 \"Test/UnionFind.test.cpp\"\n\n\nint main() {\n\tint n, q;\n\
    \tcin >> n >> q;\n\tUnionFind<int> ut(n);\n\tfor(int i = 0; i < q; i++) {\n\t\t\
    int t, u, v;\n\t\tcin >> t >> u >> v;\n\t\tif(t == 0) ut.unite(u, v);\n\t\telse\
    \ cout << ut.same(u, v) << endl;\n\t}\n\treturn 0;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\n\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n#include \"../DataStructure/UnionFind.cpp\"\
    \n\n\nint main() {\n\tint n, q;\n\tcin >> n >> q;\n\tUnionFind<int> ut(n);\n\t\
    for(int i = 0; i < q; i++) {\n\t\tint t, u, v;\n\t\tcin >> t >> u >> v;\n\t\t\
    if(t == 0) ut.unite(u, v);\n\t\telse cout << ut.same(u, v) << endl;\n\t}\n\treturn\
    \ 0;\n}"
  dependsOn:
  - DataStructure/UnionFind.cpp
  isVerificationFile: true
  path: Test/UnionFind.test.cpp
  requiredBy: []
  timestamp: '2020-12-15 01:08:12+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Test/UnionFind.test.cpp
layout: document
redirect_from:
- /verify/Test/UnionFind.test.cpp
- /verify/Test/UnionFind.test.cpp.html
title: Test/UnionFind.test.cpp
---
