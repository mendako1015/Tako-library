---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: DataStructure/WeightedUnionFind.cpp
    title: DataStructure/WeightedUnionFind.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/1/DSL_1_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/1/DSL_1_B
  bundledCode: "#line 1 \"Test/WeighedUnionFind.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/1/DSL_1_B\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n#line 1 \"DataStructure/WeightedUnionFind.cpp\"\
    \ntemplate <typename T>\nstruct WeightedUnionFind {\n    T d;\n    vector<int>\
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
    \       return weight(y) - weight(x);\n    }\n};\n#line 6 \"Test/WeighedUnionFind.test.cpp\"\
    \n\nint main() {\n\tcin.tie(0);\n\tcout.tie(0);\n\tios::sync_with_stdio(false);\n\
    \n\tint n, q;\n\tcin >> n >> q;\n\tWeightedUnionFind<int> ut(n, 0);\n\twhile(q--)\
    \ {\n\t\tint type;\n\t\tcin >> type;\n\t\tif(type == 0) {\n\t\t\tint x, y, z;\n\
    \t\t\tcin >> x >> y >> z;\n\t\t\tut.unite(x, y, z);\n\t\t} else {\n\t\t\tint x,\
    \ y;\n\t\t\tcin >> x >> y;\n\t\t\tif(ut.same(x, y)) cout << ut.diff(x, y) << endl;\n\
    \t\t\telse cout << \"?\" << endl;\n\t\t}\n\t}\n\treturn 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/1/DSL_1_B\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n#include \"../DataStructure/WeightedUnionFind.cpp\"\
    \n\nint main() {\n\tcin.tie(0);\n\tcout.tie(0);\n\tios::sync_with_stdio(false);\n\
    \n\tint n, q;\n\tcin >> n >> q;\n\tWeightedUnionFind<int> ut(n, 0);\n\twhile(q--)\
    \ {\n\t\tint type;\n\t\tcin >> type;\n\t\tif(type == 0) {\n\t\t\tint x, y, z;\n\
    \t\t\tcin >> x >> y >> z;\n\t\t\tut.unite(x, y, z);\n\t\t} else {\n\t\t\tint x,\
    \ y;\n\t\t\tcin >> x >> y;\n\t\t\tif(ut.same(x, y)) cout << ut.diff(x, y) << endl;\n\
    \t\t\telse cout << \"?\" << endl;\n\t\t}\n\t}\n\treturn 0;\n}\n"
  dependsOn:
  - DataStructure/WeightedUnionFind.cpp
  isVerificationFile: true
  path: Test/WeighedUnionFind.test.cpp
  requiredBy: []
  timestamp: '2020-12-13 20:40:04+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Test/WeighedUnionFind.test.cpp
layout: document
redirect_from:
- /verify/Test/WeighedUnionFind.test.cpp
- /verify/Test/WeighedUnionFind.test.cpp.html
title: Test/WeighedUnionFind.test.cpp
---
