---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Graph/Bellman_Ford.cpp\"\nconst int MAX_V = ;\nconst int\
    \ MAX_E = ;\nbool negative = false; // \u8CA0\u9589\u8DEF\u304C\u3042\u308B\u304B\
    \u5426\u304B\n\nstruct edge {\n  int from, to, cost;\n};\n\nedge es[MAX_E];\n\
    int d[MAX_V];\nint V, E; // \u9802\u70B9\u6570\u3001\u8FBA\u6570\n\nvoid bellman_ford(int\
    \ s) {\n  for(int i = 0; i < V; i++) d[i] = INF;\n  d[s] = 0;\n  int counter =\
    \ 0;\n\n  for(int i = 0; i < V; i++) {\n    bool update = false;\n    for(int\
    \ j = 0; j < E; j++) {\n      edge e = es[j];\n      if(d[e.from] != INF && d[e.to]\
    \ > d[e.from] + e.cost) {\n        d[e.to] = d[e.from] + e.cost;\n        update\
    \ = true;\n      }\n    }\n    if(!update) break;\n    if(i == V - 1) negative\
    \ = true;\n  }\n}\n"
  code: "const int MAX_V = ;\nconst int MAX_E = ;\nbool negative = false; // \u8CA0\
    \u9589\u8DEF\u304C\u3042\u308B\u304B\u5426\u304B\n\nstruct edge {\n  int from,\
    \ to, cost;\n};\n\nedge es[MAX_E];\nint d[MAX_V];\nint V, E; // \u9802\u70B9\u6570\
    \u3001\u8FBA\u6570\n\nvoid bellman_ford(int s) {\n  for(int i = 0; i < V; i++)\
    \ d[i] = INF;\n  d[s] = 0;\n  int counter = 0;\n\n  for(int i = 0; i < V; i++)\
    \ {\n    bool update = false;\n    for(int j = 0; j < E; j++) {\n      edge e\
    \ = es[j];\n      if(d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {\n   \
    \     d[e.to] = d[e.from] + e.cost;\n        update = true;\n      }\n    }\n\
    \    if(!update) break;\n    if(i == V - 1) negative = true;\n  }\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: Graph/Bellman_Ford.cpp
  requiredBy: []
  timestamp: '2020-12-05 06:50:48+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Graph/Bellman_Ford.cpp
layout: document
redirect_from:
- /library/Graph/Bellman_Ford.cpp
- /library/Graph/Bellman_Ford.cpp.html
title: Graph/Bellman_Ford.cpp
---
