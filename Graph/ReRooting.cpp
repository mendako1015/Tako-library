struct ReRooting {
	// change start
	struct DP {
		int dp;
		DP(int n) : dp(n) {};
	};
	const DP identity = DP(-1); // here
	function<DP(DP, DP)> merge = [](DP dp_cum, DP d) -> DP {
		return DP(max(dp_cum.dp, d.dp)); // here
	};
	function<DP(DP)> add_root = [](DP d) -> DP {
        return DP(d.dp + 1); // here
    };
    // change end

    // graph definition
    struct Edge {
        int to;
    };
    using Graph = vector<vector<Edge>>;

    vector<vector<DP>> dp;
    vector<DP> ans;
    Graph G;

    DP dfs(int v, int p = -1) {
        DP dp_cum = identity;
        int deg = G[v].size();
        dp[v] = vector<DP>(deg, identity);
        for(int i = 0; i < deg; i++) {
            int u = G[v][i].to;
            if(u == p) continue;
            dp[v][i] = dfs(u, v);
            dp_cum = merge(dp_cum, dp[v][i]);
        }
        return add_root(dp_cum);
    }

    void bfs(int v, const DP &dp_p, int p = -1) {
        int deg = G[v].size();
        for(int i = 0; i < deg; i++) {
            if(G[v][i].to == p) dp[v][i] = dp_p;
        }
        vector<DP> dp_l(deg + 1, identity), dp_r(deg + 1, identity);
        for(int i = 0; i < deg; i++) {
            dp_l[i + 1] = merge(dp_l[i], dp[v][i]);
        }
        for(int i = deg - 1; i >= 0; i--) {
            dp_r[i] = merge(dp_r[i + 1], dp[v][i]);
        }
        ans[v] = add_root(dp_l[deg]);
        for(int i = 0; i < deg; i++) {
            int u = G[v][i].to;
            if(u == p) continue;
            bfs(u, add_root(merge(dp_l[i], dp_r[i + 1])), v);
        }
    }

    ReRooting(int N) : G(N), dp(N), ans(N, identity) {}

    void add_edge(int a, int b) {
        G[a].push_back({b});
    }
    void build() {
        dfs(0);
        bfs(0, identity);
    }
};