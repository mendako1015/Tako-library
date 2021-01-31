---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: DataStructure/WeightedUnionFind.cpp
    title: DataStructure/WeightedUnionFind.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/1/DSL_1_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/1/DSL_1_B
  bundledCode: "#line 1 \"Test/AOJ/WeighedUnionFind.test.cpp\"\n#define PROBLEM \"\
    https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/1/DSL_1_B\"\n\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n#line 1 \"DataStructure/WeightedUnionFind.cpp\"\
    \ntemplate <typename T>\nstruct WeightedUnionFind {\n\tT d;\n\tvector<int> r,\
    \ p;\n\tvector<T> ws;\n\n\tWeightedUnionFind() {}\n\tWeightedUnionFind(int n,\
    \ T d) : d(d), p(n), r(n, 1), ws(n, d) {\n\t\tfor(int i = 0; i < n; i++) p[i]\
    \ = i;\n\t}\n\n\tint root(int x) {\n\t\tif(x == p[x]) return x;\n\t\tint t = root(p[x]);\n\
    \t\tws[x] += ws[p[x]];\n\t\treturn p[x] = t;\n\t}\n\n\tT weight(int x) {\n\t\t\
    root(x);\n\t\treturn ws[x];\n\t}\n\n\tbool same(int x, int y) {\n\t\treturn root(x)\
    \ == root(y);\n\t}\n\n\tvoid unite(int x, int y, T w) {\n\t\tw += weight(x);\n\
    \t\tw -= weight(y);\n\t\tx = root(x); y = root(y);\n\t\tif(x == y) return ;\n\t\
    \tif(r[x] < r[y]) std::swap(x, y), w = -w;\n\t\tr[x] += r[y];\n\t\tp[y] = x;\n\
    \t\tws[y] = w;\n\t}\n\n\tT diff(int x,int y) {\n\t\treturn weight(y) - weight(x);\n\
    \t}\n};\n#line 6 \"Test/AOJ/WeighedUnionFind.test.cpp\"\n\nint main() {\n\tcin.tie(0);\n\
    \tcout.tie(0);\n\tios::sync_with_stdio(false);\n\n\tint n, q;\n\tcin >> n >> q;\n\
    \tWeightedUnionFind<int> ut(n, 0);\n\twhile(q--) {\n\t\tint type;\n\t\tcin >>\
    \ type;\n\t\tif(type == 0) {\n\t\t\tint x, y, z;\n\t\t\tcin >> x >> y >> z;\n\t\
    \t\tut.unite(x, y, z);\n\t\t} else {\n\t\t\tint x, y;\n\t\t\tcin >> x >> y;\n\t\
    \t\tif(ut.same(x, y)) cout << ut.diff(x, y) << endl;\n\t\t\telse cout << \"?\"\
    \ << endl;\n\t\t}\n\t}\n\treturn 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/1/DSL_1_B\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n#include \"../../DataStructure/WeightedUnionFind.cpp\"\
    \n\nint main() {\n\tcin.tie(0);\n\tcout.tie(0);\n\tios::sync_with_stdio(false);\n\
    \n\tint n, q;\n\tcin >> n >> q;\n\tWeightedUnionFind<int> ut(n, 0);\n\twhile(q--)\
    \ {\n\t\tint type;\n\t\tcin >> type;\n\t\tif(type == 0) {\n\t\t\tint x, y, z;\n\
    \t\t\tcin >> x >> y >> z;\n\t\t\tut.unite(x, y, z);\n\t\t} else {\n\t\t\tint x,\
    \ y;\n\t\t\tcin >> x >> y;\n\t\t\tif(ut.same(x, y)) cout << ut.diff(x, y) << endl;\n\
    \t\t\telse cout << \"?\" << endl;\n\t\t}\n\t}\n\treturn 0;\n}\n"
  dependsOn:
  - DataStructure/WeightedUnionFind.cpp
  isVerificationFile: true
  path: Test/AOJ/WeighedUnionFind.test.cpp
  requiredBy: []
  timestamp: '2020-12-16 18:35:24+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Test/AOJ/WeighedUnionFind.test.cpp
layout: document
redirect_from:
- /verify/Test/AOJ/WeighedUnionFind.test.cpp
- /verify/Test/AOJ/WeighedUnionFind.test.cpp.html
title: Test/AOJ/WeighedUnionFind.test.cpp
---
