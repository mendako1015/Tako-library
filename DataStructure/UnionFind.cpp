template<class T = int>
struct UnionFind {
	vector<T> data;

    UnionFind(int size): data(size, -1) {}

    void unite(int x, int y) {
        x = root(x), y = root(y);
        if(x == y) return ;
        if(data[x] > data[y]) swap(x, y);
        data[x] += data[y];
        data[y] = x;
    }

    int root(int x) {
        if(data[x] < 0) return x;
        return (data[x] = root(data[x]));
    }

    bool same(int x, int y) {
        return root(x) == root(y);
    }
};