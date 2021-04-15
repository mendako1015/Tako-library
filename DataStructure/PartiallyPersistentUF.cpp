template<typename T = int>
class PartiallyPersistentUnionFind {
	vector<T> data;
	vector<int> last;
	vector<vector<pair<int, int>>> add;

	public:
	PartiallyPersistentUnionFind() {}

	PartiallyPersistentUnionFind(int n): data(n, -1), last(n, 1e9), add(n) {
		for(auto &vs : add) vs.emplace_back(-1, -1);
	}

	bool unite(int t, int x, int y) {
		x = find(x), y = find(y);
		if(x == y) return false;
		if(data[x] > data[y]) swap(x, y);
		data[x] += data[y];
		add[x].emplace_back(t, data[x]);
		data[y] = x;
		last[y] = t;
		return true;
	}

	int find(int t, int x) {
		if(t < last[x]) return x;
		return find(t, data[x]);
	}

	bool same(int t, int x, int y) {
		return (find(t, x) == find(t, y));
	}

	int size(int t, int x) {
		x = find(t, x);
		return -prev(lower_bound(begin(add[x]), end(add[x]), make_pair(t, 0))) -> second;
	}
};