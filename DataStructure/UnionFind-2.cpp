template<class T> struct UnionFind {
	vector<T> par, size;
	
	UnionFind(int n) : par(n), size(n){
		par.assign(n, (T)0);
		size.assign(n, (T)0);
	}

	int root(int x) {
		if(par[x] == x) return x;
		return par[x] = root(par[x]);
	}

	bool same(int x, int y) {
		return root(x) == root(y);
	}

	void unite(int x, int y) {
		x = root(x), y = root(y);
		if(x == y) return ;
		if(size[x] < size[y]) swap(x, y);
		par[y] = x, size[x] += size[y], size[y] = size[x];
	}

	int getsize(int x) {
		return size[root(x)];
	}
};