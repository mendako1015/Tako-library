const int MAX_V = 100010;

vector<P> graph[MAX_V];
int dist[MAX_V];
int V; // 頂点数

void dijkstra(int s) {
	priority_queue< P, vector<P>, greater<P> > que;
	fill(dist, dist + V, INF);
	dist[s] = 0;
	que.push(P(0, s));

	while(!que.empty()) {
		P p = que.top(); que.pop();
		int next = p.to;
		if(dist[next] < p.cost) continue;
		for(P e : graph[next]) {
			if(dist[e.to] > dist[next] + e.cost) {
				dist[e.to] = dist[next] + e.cost;
				que.push(P(dist[e.to], e.to));
			}
		}
	}
}
