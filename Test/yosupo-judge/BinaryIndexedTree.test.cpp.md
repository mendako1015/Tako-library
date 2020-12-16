---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: DataStructure/BinaryIndexedTree.cpp
    title: DataStructure/BinaryIndexedTree.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/point_add_range_sum
    links:
    - https://judge.yosupo.jp/problem/point_add_range_sum
  bundledCode: "#line 1 \"Test/yosupo-judge/BinaryIndexedTree.test.cpp\"\n#define\
    \ PROBLEM \"https://judge.yosupo.jp/problem/point_add_range_sum\"\n\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n#line 1 \"DataStructure/BinaryIndexedTree.cpp\"\
    \ntemplate<class T = int>\nstruct BinaryIndexedTree {\n\tint N;\n\tvector<T> bit;\n\
    \n\tBinaryIndexedTree() : N(0) {}\n\tBinaryIndexedTree(int n) : N(n), bit(N +\
    \ 1, 0) {}\n\tBinaryIndexedTree(int n, T init) : N(n), bit(N + 1, init) {}\n\n\
    \tvoid add(int pos, T x) {\n\t\tpos++;\n\t\twhile(pos <= N) {\n\t\t\tbit[pos]\
    \ += x;\n\t\t\tpos += pos & -pos;\n\t\t}\n\t}\n\n\tT sum(int pos) {\n\t\tT ret\
    \ = 0;\n\t\twhile(pos > 0) {\n\t\t\tret += bit[pos];\n\t\t\tpos -= pos & -pos;\n\
    \t\t}\n\t\treturn ret;\n\t}\n\n\tT sum(int l, int r) {\n\t\treturn sum(r) - sum(l);\n\
    \t}\n\n\tconst T& operator[](const int &pos) const {\n\t\treturn bit[pos];\n\t\
    }\n};\n#line 6 \"Test/yosupo-judge/BinaryIndexedTree.test.cpp\"\n\n\nint main()\
    \ {\n\tint n, q;\n\tcin >> n >> q;\n\tBinaryIndexedTree<long long> BIT(n);\n\t\
    for(int i = 0; i < n; i++) {\n\t\tint a;\n\t\tcin >> a;\n\t\tBIT.add(i, a);\n\t\
    }\n\twhile(q--) {\n\t\tint com, a, b;\n\t\tcin >> com >> a >> b;\n\t\tif(com ==\
    \ 0) BIT.add(a, b);\n\t\telse cout << BIT.sum(a, b) << endl;\n\t}\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/point_add_range_sum\"\n\
    \n#include <bits/stdc++.h>\nusing namespace std;\n#include \"../../DataStructure/BinaryIndexedTree.cpp\"\
    \n\n\nint main() {\n\tint n, q;\n\tcin >> n >> q;\n\tBinaryIndexedTree<long long>\
    \ BIT(n);\n\tfor(int i = 0; i < n; i++) {\n\t\tint a;\n\t\tcin >> a;\n\t\tBIT.add(i,\
    \ a);\n\t}\n\twhile(q--) {\n\t\tint com, a, b;\n\t\tcin >> com >> a >> b;\n\t\t\
    if(com == 0) BIT.add(a, b);\n\t\telse cout << BIT.sum(a, b) << endl;\n\t}\n}"
  dependsOn:
  - DataStructure/BinaryIndexedTree.cpp
  isVerificationFile: true
  path: Test/yosupo-judge/BinaryIndexedTree.test.cpp
  requiredBy: []
  timestamp: '2020-12-16 19:14:26+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Test/yosupo-judge/BinaryIndexedTree.test.cpp
layout: document
redirect_from:
- /verify/Test/yosupo-judge/BinaryIndexedTree.test.cpp
- /verify/Test/yosupo-judge/BinaryIndexedTree.test.cpp.html
title: Test/yosupo-judge/BinaryIndexedTree.test.cpp
---
