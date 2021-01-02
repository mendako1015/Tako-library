template<class T = int>
struct UnionFind {
	vector<T> data;
	vector<int> size;

	UnionFind(int n): data(n, -1), size(n, 0) {}

	void unite(int x, int y) {
		x = root(x), y = root(y);
		if(x == y) return ;
		if(data[x] > data[y]) swap(x, y);
		data[x] += data[y];
		size[x] += size[y];
		data[y] = x;
	}

	int root(int x) {
		if(data[x] < 0) return x;
		return (data[x] = root(data[x]));
	}

	bool same(int x, int y) {
		return root(x) == root(y);
	}

	int getsize(int x) {
		return size[root(x)];
	}
};
