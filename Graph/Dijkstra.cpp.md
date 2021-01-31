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
  bundledCode: "#line 1 \"Graph/Dijkstra.cpp\"\nconst int MAX_V = 100010;\n\nvector<P>\
    \ graph[MAX_V];\nint dist[MAX_V];\nint V; // \u9802\u70B9\u6570\n\nvoid dijkstra(int\
    \ s) {\n\tpriority_queue< P, vector<P>, greater<P> > que;\n\tfill(dist, dist +\
    \ V, INF);\n\tdist[s] = 0;\n\tque.push(P(0, s));\n\n\twhile(!que.empty()) {\n\t\
    \tP p = que.top(); que.pop();\n\t\tint next = p.second;\n\t\tif(dist[next] < p.first)\
    \ continue;\n\t\tfor(P e : graph[next]) {\n\t\t\tif(dist[e.second] > dist[next]\
    \ + e.first) {\n\t\t\t\tdist[e.second] = dist[next] + e.first;\n\t\t\t\tque.push(P(dist[e.second],\
    \ e.second));\n\t\t\t}\n\t\t}\n\t}\n}\n"
  code: "const int MAX_V = 100010;\n\nvector<P> graph[MAX_V];\nint dist[MAX_V];\n\
    int V; // \u9802\u70B9\u6570\n\nvoid dijkstra(int s) {\n\tpriority_queue< P, vector<P>,\
    \ greater<P> > que;\n\tfill(dist, dist + V, INF);\n\tdist[s] = 0;\n\tque.push(P(0,\
    \ s));\n\n\twhile(!que.empty()) {\n\t\tP p = que.top(); que.pop();\n\t\tint next\
    \ = p.second;\n\t\tif(dist[next] < p.first) continue;\n\t\tfor(P e : graph[next])\
    \ {\n\t\t\tif(dist[e.second] > dist[next] + e.first) {\n\t\t\t\tdist[e.second]\
    \ = dist[next] + e.first;\n\t\t\t\tque.push(P(dist[e.second], e.second));\n\t\t\
    \t}\n\t\t}\n\t}\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: Graph/Dijkstra.cpp
  requiredBy: []
  timestamp: '2020-12-05 06:50:48+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Graph/Dijkstra.cpp
layout: document
redirect_from:
- /library/Graph/Dijkstra.cpp
- /library/Graph/Dijkstra.cpp.html
title: Graph/Dijkstra.cpp
---
