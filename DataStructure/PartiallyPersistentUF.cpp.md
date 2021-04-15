---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"DataStructure/PartiallyPersistentUF.cpp\"\ntemplate<typename\
    \ T = int>\nclass PartiallyPersistentUnionFind {\n\tvector<T> data;\n\tvector<int>\
    \ last;\n\tvector<vector<pair<int, int>>> add;\n\n\tpublic:\n\tPartiallyPersistentUnionFind()\
    \ {}\n\n\tPartiallyPersistentUnionFind(int n): data(n, -1), last(n, 1e9), add(n)\
    \ {\n\t\tfor(auto &vs : add) vs.emplace_back(-1, -1);\n\t}\n\n\tbool unite(int\
    \ t, int x, int y) {\n\t\tx = find(x), y = find(y);\n\t\tif(x == y) return false;\n\
    \t\tif(data[x] > data[y]) swap(x, y);\n\t\tdata[x] += data[y];\n\t\tadd[x].emplace_back(t,\
    \ data[x]);\n\t\tdata[y] = x;\n\t\tlast[y] = t;\n\t\treturn true;\n\t}\n\n\tint\
    \ find(int t, int x) {\n\t\tif(t < last[x]) return x;\n\t\treturn find(t, data[x]);\n\
    \t}\n\n\tbool same(int t, int x, int y) {\n\t\treturn (find(t, x) == find(t, y));\n\
    \t}\n\n\tint size(int t, int x) {\n\t\tx = find(t, x);\n\t\treturn -prev(lower_bound(begin(add[x]),\
    \ end(add[x]), make_pair(t, 0))) -> second;\n\t}\n};\n"
  code: "template<typename T = int>\nclass PartiallyPersistentUnionFind {\n\tvector<T>\
    \ data;\n\tvector<int> last;\n\tvector<vector<pair<int, int>>> add;\n\n\tpublic:\n\
    \tPartiallyPersistentUnionFind() {}\n\n\tPartiallyPersistentUnionFind(int n):\
    \ data(n, -1), last(n, 1e9), add(n) {\n\t\tfor(auto &vs : add) vs.emplace_back(-1,\
    \ -1);\n\t}\n\n\tbool unite(int t, int x, int y) {\n\t\tx = find(x), y = find(y);\n\
    \t\tif(x == y) return false;\n\t\tif(data[x] > data[y]) swap(x, y);\n\t\tdata[x]\
    \ += data[y];\n\t\tadd[x].emplace_back(t, data[x]);\n\t\tdata[y] = x;\n\t\tlast[y]\
    \ = t;\n\t\treturn true;\n\t}\n\n\tint find(int t, int x) {\n\t\tif(t < last[x])\
    \ return x;\n\t\treturn find(t, data[x]);\n\t}\n\n\tbool same(int t, int x, int\
    \ y) {\n\t\treturn (find(t, x) == find(t, y));\n\t}\n\n\tint size(int t, int x)\
    \ {\n\t\tx = find(t, x);\n\t\treturn -prev(lower_bound(begin(add[x]), end(add[x]),\
    \ make_pair(t, 0))) -> second;\n\t}\n};"
  dependsOn: []
  isVerificationFile: false
  path: DataStructure/PartiallyPersistentUF.cpp
  requiredBy: []
  timestamp: '2021-04-15 22:40:55+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: DataStructure/PartiallyPersistentUF.cpp
layout: document
redirect_from:
- /library/DataStructure/PartiallyPersistentUF.cpp
- /library/DataStructure/PartiallyPersistentUF.cpp.html
title: DataStructure/PartiallyPersistentUF.cpp
---
