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
  bundledCode: "#line 1 \"Graph/ReRooting.cpp\"\nstruct ReRooting {\n\t// change start\n\
    \tstruct DP {\n\t\tint dp;\n\t\tDP(int n) : dp(n) {};\n\t};\n\tconst DP identity\
    \ = DP(-1); // here\n\tfunction<DP(DP, DP)> merge = [](DP dp_cum, DP d) -> DP\
    \ {\n\t\treturn DP(max(dp_cum.dp, d.dp)); // here\n\t};\n\tfunction<DP(DP)> add_root\
    \ = [](DP d) -> DP {\n        return DP(d.dp + 1); // here\n    };\n    // change\
    \ end\n\n    // graph definition\n    struct Edge {\n        int to;\n    };\n\
    \    using Graph = vector<vector<Edge>>;\n\n    vector<vector<DP>> dp;\n    vector<DP>\
    \ ans;\n    Graph G;\n\n    DP dfs(int v, int p = -1) {\n        DP dp_cum = identity;\n\
    \        int deg = G[v].size();\n        dp[v] = vector<DP>(deg, identity);\n\
    \        for(int i = 0; i < deg; i++) {\n            int u = G[v][i].to;\n   \
    \         if(u == p) continue;\n            dp[v][i] = dfs(u, v);\n          \
    \  dp_cum = merge(dp_cum, dp[v][i]);\n        }\n        return add_root(dp_cum);\n\
    \    }\n\n    void bfs(int v, const DP &dp_p, int p = -1) {\n        int deg =\
    \ G[v].size();\n        for(int i = 0; i < deg; i++) {\n            if(G[v][i].to\
    \ == p) dp[v][i] = dp_p;\n        }\n        vector<DP> dp_l(deg + 1, identity),\
    \ dp_r(deg + 1, identity);\n        for(int i = 0; i < deg; i++) {\n         \
    \   dp_l[i + 1] = merge(dp_l[i], dp[v][i]);\n        }\n        for(int i = deg\
    \ - 1; i >= 0; i--) {\n            dp_r[i] = merge(dp_r[i + 1], dp[v][i]);\n \
    \       }\n        ans[v] = add_root(dp_l[deg]);\n        for(int i = 0; i < deg;\
    \ i++) {\n            int u = G[v][i].to;\n            if(u == p) continue;\n\
    \            bfs(u, add_root(merge(dp_l[i], dp_r[i + 1])), v);\n        }\n  \
    \  }\n\n    ReRooting(int N) : G(N), dp(N), ans(N, identity) {}\n\n    void add_edge(int\
    \ a, int b) {\n        G[a].push_back({b});\n    }\n    void build() {\n     \
    \   dfs(0);\n        bfs(0, identity);\n    }\n};\n"
  code: "struct ReRooting {\n\t// change start\n\tstruct DP {\n\t\tint dp;\n\t\tDP(int\
    \ n) : dp(n) {};\n\t};\n\tconst DP identity = DP(-1); // here\n\tfunction<DP(DP,\
    \ DP)> merge = [](DP dp_cum, DP d) -> DP {\n\t\treturn DP(max(dp_cum.dp, d.dp));\
    \ // here\n\t};\n\tfunction<DP(DP)> add_root = [](DP d) -> DP {\n        return\
    \ DP(d.dp + 1); // here\n    };\n    // change end\n\n    // graph definition\n\
    \    struct Edge {\n        int to;\n    };\n    using Graph = vector<vector<Edge>>;\n\
    \n    vector<vector<DP>> dp;\n    vector<DP> ans;\n    Graph G;\n\n    DP dfs(int\
    \ v, int p = -1) {\n        DP dp_cum = identity;\n        int deg = G[v].size();\n\
    \        dp[v] = vector<DP>(deg, identity);\n        for(int i = 0; i < deg; i++)\
    \ {\n            int u = G[v][i].to;\n            if(u == p) continue;\n     \
    \       dp[v][i] = dfs(u, v);\n            dp_cum = merge(dp_cum, dp[v][i]);\n\
    \        }\n        return add_root(dp_cum);\n    }\n\n    void bfs(int v, const\
    \ DP &dp_p, int p = -1) {\n        int deg = G[v].size();\n        for(int i =\
    \ 0; i < deg; i++) {\n            if(G[v][i].to == p) dp[v][i] = dp_p;\n     \
    \   }\n        vector<DP> dp_l(deg + 1, identity), dp_r(deg + 1, identity);\n\
    \        for(int i = 0; i < deg; i++) {\n            dp_l[i + 1] = merge(dp_l[i],\
    \ dp[v][i]);\n        }\n        for(int i = deg - 1; i >= 0; i--) {\n       \
    \     dp_r[i] = merge(dp_r[i + 1], dp[v][i]);\n        }\n        ans[v] = add_root(dp_l[deg]);\n\
    \        for(int i = 0; i < deg; i++) {\n            int u = G[v][i].to;\n   \
    \         if(u == p) continue;\n            bfs(u, add_root(merge(dp_l[i], dp_r[i\
    \ + 1])), v);\n        }\n    }\n\n    ReRooting(int N) : G(N), dp(N), ans(N,\
    \ identity) {}\n\n    void add_edge(int a, int b) {\n        G[a].push_back({b});\n\
    \    }\n    void build() {\n        dfs(0);\n        bfs(0, identity);\n    }\n\
    };"
  dependsOn: []
  isVerificationFile: false
  path: Graph/ReRooting.cpp
  requiredBy: []
  timestamp: '2021-03-31 20:52:06+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Graph/ReRooting.cpp
layout: document
redirect_from:
- /library/Graph/ReRooting.cpp
- /library/Graph/ReRooting.cpp.html
title: Graph/ReRooting.cpp
---
