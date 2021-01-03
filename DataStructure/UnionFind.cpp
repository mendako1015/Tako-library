template<class T = int>
struct UnionFind {
	vector<T> par;
	vector<int> size;

	UnionFind(int n): par(n, -1), size(n, 1) {}

	void unite(int x, int y) {
		x = root(x), y = root(y);
		if(x == y) return ;
		if(size[x] < size[y]) swap(x, y);
		par[y] = x;
		size[x] = size[y] = size[x] + size[y];
	}

	int root(int x) {
		if(par[x] < 0) return x;
		return (par[x] = root(par[x]));
	}

	bool same(int x, int y) {
		return root(x) == root(y);
	}

	int getsize(int x) {
		return size[root(x)];
	}
};
