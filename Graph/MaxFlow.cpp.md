---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Test/AOJ/MaxFlow.test.cpp
    title: Test/AOJ/MaxFlow.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Graph/MaxFlow.cpp\"\ntemplate<class flow_t>\nclass Dinic\
    \ {\n\tstruct Edge {\n\t\tint to;\n\t\tflow_t cap;\n\t\tint rev;\n\t\tbool isrev;\n\
    \t\tint id;\n\t};\n\n\tconst flow_t INF;\n\tvector<vector<Edge>> graph;\n\tvector<int>\
    \ min_cost, iter;\n\n\tbool bfs(int s, int t) {\n\t\tmin_cost.assign(graph.size(),\
    \ -1);\n\t\tqueue<int> que;\n\t\tmin_cost[s] = 0;\n\t\tque.push(s);\n\t\twhile(!que.empty()\
    \ && min_cost[t] == -1) {\n\t\t\tint now = que.front();\n\t\t\tque.pop();\n\t\t\
    \tfor(Edge &e : graph[now]) {\n\t\t\t\tif(e.cap > 0 && min_cost[e.to] == -1) {\n\
    \t\t\t\t\tmin_cost[e.to] = min_cost[now] + 1;\n\t\t\t\t\tque.push(e.to);\n\t\t\
    \t\t}\n\t\t\t}\n\t\t}\n\t\treturn min_cost[t] != -1;\n\t}\n\n\tflow_t dfs(int\
    \ id, const int t, flow_t flow) {\n\t\tif(id == t) return flow;\n\t\tfor(int &i\
    \ = iter[id]; i < graph[id].size(); i++) {\n\t\t\tEdge &e = graph[id][i];\n\t\t\
    \tif(e.cap > 0 && min_cost[id] < min_cost[e.to]) {\n\t\t\t\tflow_t d = dfs(e.to,\
    \ t, min(flow, e.cap));\n\t\t\t\tif(d > 0) {\n\t\t\t\t\te.cap -= d;\n\t\t\t\t\t\
    graph[e.to][e.rev].cap += d;\n\t\t\t\t\treturn d;\n\t\t\t\t}\n\t\t\t}\n\t\t}\n\
    \t\treturn 0;\n\t}\n\n\tpublic:\n\tDinic(int V): INF(numeric_limits<flow_t>::max()),\
    \ graph(V) {}\n\t\n\tvoid add_edge(int from, int to, flow_t cap, int id = -1)\
    \ {\n\t\tgraph[from].push_back({to, cap, (int)graph[to].size(), false, id});\n\
    \t\tgraph[to].push_back({from, 0, (int)graph[from].size() - 1, true, id});\n\t\
    }\n\n\tflow_t max_flow(int s, int t) {\n\t\tflow_t flow = 0;\n\t\twhile(bfs(s,\
    \ t)) {\n\t\t\titer.assign(graph.size(), 0);\n\t\t\tflow_t f = 0;\n\t\t\twhile((f\
    \ = dfs(s, t, INF)) > 0) flow += f;\n\t\t}\n\t\treturn flow;\n\t}\n};\n"
  code: "template<class flow_t>\nclass Dinic {\n\tstruct Edge {\n\t\tint to;\n\t\t\
    flow_t cap;\n\t\tint rev;\n\t\tbool isrev;\n\t\tint id;\n\t};\n\n\tconst flow_t\
    \ INF;\n\tvector<vector<Edge>> graph;\n\tvector<int> min_cost, iter;\n\n\tbool\
    \ bfs(int s, int t) {\n\t\tmin_cost.assign(graph.size(), -1);\n\t\tqueue<int>\
    \ que;\n\t\tmin_cost[s] = 0;\n\t\tque.push(s);\n\t\twhile(!que.empty() && min_cost[t]\
    \ == -1) {\n\t\t\tint now = que.front();\n\t\t\tque.pop();\n\t\t\tfor(Edge &e\
    \ : graph[now]) {\n\t\t\t\tif(e.cap > 0 && min_cost[e.to] == -1) {\n\t\t\t\t\t\
    min_cost[e.to] = min_cost[now] + 1;\n\t\t\t\t\tque.push(e.to);\n\t\t\t\t}\n\t\t\
    \t}\n\t\t}\n\t\treturn min_cost[t] != -1;\n\t}\n\n\tflow_t dfs(int id, const int\
    \ t, flow_t flow) {\n\t\tif(id == t) return flow;\n\t\tfor(int &i = iter[id];\
    \ i < graph[id].size(); i++) {\n\t\t\tEdge &e = graph[id][i];\n\t\t\tif(e.cap\
    \ > 0 && min_cost[id] < min_cost[e.to]) {\n\t\t\t\tflow_t d = dfs(e.to, t, min(flow,\
    \ e.cap));\n\t\t\t\tif(d > 0) {\n\t\t\t\t\te.cap -= d;\n\t\t\t\t\tgraph[e.to][e.rev].cap\
    \ += d;\n\t\t\t\t\treturn d;\n\t\t\t\t}\n\t\t\t}\n\t\t}\n\t\treturn 0;\n\t}\n\n\
    \tpublic:\n\tDinic(int V): INF(numeric_limits<flow_t>::max()), graph(V) {}\n\t\
    \n\tvoid add_edge(int from, int to, flow_t cap, int id = -1) {\n\t\tgraph[from].push_back({to,\
    \ cap, (int)graph[to].size(), false, id});\n\t\tgraph[to].push_back({from, 0,\
    \ (int)graph[from].size() - 1, true, id});\n\t}\n\n\tflow_t max_flow(int s, int\
    \ t) {\n\t\tflow_t flow = 0;\n\t\twhile(bfs(s, t)) {\n\t\t\titer.assign(graph.size(),\
    \ 0);\n\t\t\tflow_t f = 0;\n\t\t\twhile((f = dfs(s, t, INF)) > 0) flow += f;\n\
    \t\t}\n\t\treturn flow;\n\t}\n};"
  dependsOn: []
  isVerificationFile: false
  path: Graph/MaxFlow.cpp
  requiredBy: []
  timestamp: '2021-02-21 01:50:05+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Test/AOJ/MaxFlow.test.cpp
documentation_of: Graph/MaxFlow.cpp
layout: document
redirect_from:
- /library/Graph/MaxFlow.cpp
- /library/Graph/MaxFlow.cpp.html
title: Graph/MaxFlow.cpp
---
