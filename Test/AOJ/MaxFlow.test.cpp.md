---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Graph/MaxFlow.cpp
    title: Graph/MaxFlow.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/GRL_6_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/GRL_6_A
  bundledCode: "#line 1 \"Test/AOJ/MaxFlow.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/GRL_6_A\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n#line 1 \"Graph/MaxFlow.cpp\"\
    \ntemplate<class flow_t>\nclass Dinic {\n\tstruct Edge {\n\t\tint to;\n\t\tflow_t\
    \ cap;\n\t\tint rev;\n\t\tbool isrev;\n\t\tint id;\n\t};\n\n\tconst flow_t INF;\n\
    \tvector<vector<Edge>> graph;\n\tvector<int> min_cost, iter;\n\n\tbool bfs(int\
    \ s, int t) {\n\t\tmin_cost.assign(graph.size(), -1);\n\t\tqueue<int> que;\n\t\
    \tmin_cost[s] = 0;\n\t\tque.push(s);\n\t\twhile(!que.empty() && min_cost[t] ==\
    \ -1) {\n\t\t\tint now = que.front();\n\t\t\tque.pop();\n\t\t\tfor(Edge &e : graph[now])\
    \ {\n\t\t\t\tif(e.cap > 0 && min_cost[e.to] == -1) {\n\t\t\t\t\tmin_cost[e.to]\
    \ = min_cost[now] + 1;\n\t\t\t\t\tque.push(e.to);\n\t\t\t\t}\n\t\t\t}\n\t\t}\n\
    \t\treturn min_cost[t] != -1;\n\t}\n\n\tflow_t dfs(int id, const int t, flow_t\
    \ flow) {\n\t\tif(id == t) return flow;\n\t\tfor(int &i = iter[id]; i < graph[id].size();\
    \ i++) {\n\t\t\tEdge &e = graph[id][i];\n\t\t\tif(e.cap > 0 && min_cost[id] <\
    \ min_cost[e.to]) {\n\t\t\t\tflow_t d = dfs(e.to, t, min(flow, e.cap));\n\t\t\t\
    \tif(d > 0) {\n\t\t\t\t\te.cap -= d;\n\t\t\t\t\tgraph[e.to][e.rev].cap += d;\n\
    \t\t\t\t\treturn d;\n\t\t\t\t}\n\t\t\t}\n\t\t}\n\t\treturn 0;\n\t}\n\n\tpublic:\n\
    \tDinic(int V): INF(numeric_limits<flow_t>::max()), graph(V) {}\n\t\n\tvoid add_edge(int\
    \ from, int to, flow_t cap, int id = -1) {\n\t\tgraph[from].push_back({to, cap,\
    \ (int)graph[to].size(), false, id});\n\t\tgraph[to].push_back({from, 0, (int)graph[from].size()\
    \ - 1, true, id});\n\t}\n\n\tflow_t max_flow(int s, int t) {\n\t\tflow_t flow\
    \ = 0;\n\t\twhile(bfs(s, t)) {\n\t\t\titer.assign(graph.size(), 0);\n\t\t\tflow_t\
    \ f = 0;\n\t\t\twhile((f = dfs(s, t, INF)) > 0) flow += f;\n\t\t}\n\t\treturn\
    \ flow;\n\t}\n};\n#line 6 \"Test/AOJ/MaxFlow.test.cpp\"\ntypedef long long ll;\n\
    \nint main() {\n\tint V, E;\n\tcin >> V >> E;\n\tDinic<int> g(V);\n\tfor(int i\
    \ = 0; i < E; i++) {\n\t\tint a, b, c;\n\t\tcin >> a >> b >> c;\n\t\tg.add_edge(a,\
    \ b, c);\n\t}\n\tcout << g.max_flow(0, V - 1) << endl;\n\treturn 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/GRL_6_A\"\n\n\
    #include <bits/stdc++.h>\nusing namespace std;\n#include \"../../Graph/MaxFlow.cpp\"\
    \ntypedef long long ll;\n\nint main() {\n\tint V, E;\n\tcin >> V >> E;\n\tDinic<int>\
    \ g(V);\n\tfor(int i = 0; i < E; i++) {\n\t\tint a, b, c;\n\t\tcin >> a >> b >>\
    \ c;\n\t\tg.add_edge(a, b, c);\n\t}\n\tcout << g.max_flow(0, V - 1) << endl;\n\
    \treturn 0;\n}"
  dependsOn:
  - Graph/MaxFlow.cpp
  isVerificationFile: true
  path: Test/AOJ/MaxFlow.test.cpp
  requiredBy: []
  timestamp: '2021-02-21 02:01:28+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Test/AOJ/MaxFlow.test.cpp
layout: document
redirect_from:
- /verify/Test/AOJ/MaxFlow.test.cpp
- /verify/Test/AOJ/MaxFlow.test.cpp.html
title: Test/AOJ/MaxFlow.test.cpp
---
