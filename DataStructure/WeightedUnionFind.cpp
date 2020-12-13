template <typename T>
struct WeightedUnionFind {
    T d;
    vector<int> r, p;
    vector<T> ws;

    WeightedUnionFind() {}
    WeightedUnionFind(int n, T d) : d(d), p(n), r(n, 1), ws(n, d) {
        for(int i = 0; i < n; i++) p[i] = i;
    }

    int root(int x) {
        if(x == p[x]) return x;
        int t = root(p[x]);
        ws[x] += ws[p[x]];
        return p[x] = t;
    }

    T weight(int x) {
        root(x);
        return ws[x];
    }

    bool same(int x, int y) {
        return root(x) == root(y);
    }

    void unite(int x, int y, T w) {
        w += weight(x);
        w -= weight(y);
        x = root(x); y = root(y);
        if(x == y) return ;
        if(r[x] < r[y]) std::swap(x, y), w = -w;
        r[x] += r[y];
        p[y] = x;
        ws[y] = w;
    }

    T diff(int x,int y) {
        return weight(y) - weight(x);
    }
};