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
  bundledCode: "#line 1 \"Graph/EulerTour.cpp\"\nclass EulerTour {\n\tprivate:\n\t\
    vector<int> path;\n\tvector<int> in, out;\n\tint cnt;\n\tvector<vector<int>> G;\n\
    \ \n\tvoid dfs(int v, int p) {\n\t\tin[v] = cnt;\n\t\tpath.push_back(v);\n\t\t\
    cnt++;\n\t\tfor(int nxt : G[v]) {\n\t\t\tif(nxt != p) {\n\t\t\t\tdfs(nxt, v);\n\
    \t\t\t\tpath.push_back(v);\n\t\t\t\tcnt++;\n\t\t\t}\n\t\t}\n\t\tout[v] = cnt;\n\
    \t}\n \n\tpublic:\n\tEulerTour(vector<vector<int>> G, int root = 0) : G(G) {\n\
    \t\tin = vector<int>(G.size());\n\t\tout = vector<int>(G.size());\n\t\tcnt = 0;\n\
    \t\tdfs(root, -1);\n\t}\n \n\tvector<int> getpath() {\n\t\treturn path;\n\t}\n\
    \ \n\tpair<int, int> interval(int v) {\n\t\treturn make_pair(in[v], out[v]);\n\
    \t}\n};\n"
  code: "class EulerTour {\n\tprivate:\n\tvector<int> path;\n\tvector<int> in, out;\n\
    \tint cnt;\n\tvector<vector<int>> G;\n \n\tvoid dfs(int v, int p) {\n\t\tin[v]\
    \ = cnt;\n\t\tpath.push_back(v);\n\t\tcnt++;\n\t\tfor(int nxt : G[v]) {\n\t\t\t\
    if(nxt != p) {\n\t\t\t\tdfs(nxt, v);\n\t\t\t\tpath.push_back(v);\n\t\t\t\tcnt++;\n\
    \t\t\t}\n\t\t}\n\t\tout[v] = cnt;\n\t}\n \n\tpublic:\n\tEulerTour(vector<vector<int>>\
    \ G, int root = 0) : G(G) {\n\t\tin = vector<int>(G.size());\n\t\tout = vector<int>(G.size());\n\
    \t\tcnt = 0;\n\t\tdfs(root, -1);\n\t}\n \n\tvector<int> getpath() {\n\t\treturn\
    \ path;\n\t}\n \n\tpair<int, int> interval(int v) {\n\t\treturn make_pair(in[v],\
    \ out[v]);\n\t}\n};"
  dependsOn: []
  isVerificationFile: false
  path: Graph/EulerTour.cpp
  requiredBy: []
  timestamp: '2021-01-11 21:31:41+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Graph/EulerTour.cpp
layout: document
redirect_from:
- /library/Graph/EulerTour.cpp
- /library/Graph/EulerTour.cpp.html
title: Graph/EulerTour.cpp
---
