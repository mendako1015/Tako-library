class EulerTour {
	private:
	vector<int> path;
	vector<int> in, out;
	int cnt;
	vector<vector<int>> G;
 
	void dfs(int v, int p) {
		in[v] = cnt;
		path.push_back(v);
		cnt++;
		for(int nxt : G[v]) {
			if(nxt != p) {
				dfs(nxt, v);
				path.push_back(v);
				cnt++;
			}
		}
		out[v] = cnt;
	}
 
	public:
	EulerTour(vector<vector<int>> G, int root = 0) : G(G) {
		in = vector<int>(G.size());
		out = vector<int>(G.size());
		cnt = 0;
		dfs(root, -1);
	}
 
	vector<int> getpath() {
		return path;
	}
 
	pair<int, int> interval(int v) {
		return make_pair(in[v], out[v]);
	}
};