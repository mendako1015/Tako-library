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
		int next = p.second;
		if(dist[next] < p.first) continue;
		for(P e : graph[next]) {
			if(dist[e.second] > dist[next] + e.first) {
				dist[e.second] = dist[next] + e.first;
				que.push(P(dist[e.second], e.second));
			}
		}
	}
}
