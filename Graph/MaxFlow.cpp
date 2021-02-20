template<class flow_t>
class Dinic {
	struct Edge {
		int to;
		flow_t cap;
		int rev;
		bool isrev;
		int id;
	};

	const flow_t INF;
	vector<vector<Edge>> graph;
	vector<int> min_cost, iter;

	bool bfs(int s, int t) {
		min_cost.assign(graph.size(), -1);
		queue<int> que;
		min_cost[s] = 0;
		que.push(s);
		while(!que.empty() && min_cost[t] == -1) {
			int now = que.front();
			que.pop();
			for(Edge &e : graph[now]) {
				if(e.cap > 0 && min_cost[e.to] == -1) {
					min_cost[e.to] = min_cost[now] + 1;
					que.push(e.to);
				}
			}
		}
		return min_cost[t] != -1;
	}

	flow_t dfs(int id, const int t, flow_t flow) {
		if(id == t) return flow;
		for(int &i = iter[id]; i < graph[id].size(); i++) {
			Edge &e = graph[id][i];
			if(e.cap > 0 && min_cost[id] < min_cost[e.to]) {
				flow_t d = dfs(e.to, t, min(flow, e.cap));
				if(d > 0) {
					e.cap -= d;
					graph[e.to][e.rev].cap += d;
					return d;
				}
			}
		}
		return 0;
	}

	public:
	Dinic(int V): INF(numeric_limits<flow_t>::max()), graph(V) {}
	
	void add_edge(int from, int to, flow_t cap, int id = -1) {
		graph[from].push_back({to, cap, (int)graph[to].size(), false, id});
		graph[to].push_back({from, 0, (int)graph[from].size() - 1, true, id});
	}

	flow_t max_flow(int s, int t) {
		flow_t flow = 0;
		while(bfs(s, t)) {
			iter.assign(graph.size(), 0);
			flow_t f = 0;
			while((f = dfs(s, t, INF)) > 0) flow += f;
		}
		return flow;
	}
};