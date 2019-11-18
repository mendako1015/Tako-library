const int MAX_E = ; // 辺の数

struct UnionFind {
    vector<int> par;

    UnionFind(int N) : par(N) {
        for(int i = 0; i < N; i++) par[i] = i;
    }

    int root(int x) {
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        if (rx == ry) return;
        par[rx] = ry;
    }

    bool same(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

struct edge {
  int u, v, cost;
};

bool comp(const edge& e1, const edge& e2) {
  return e1.cost < e2.cost;
}

edge es[MAX_E];
int V, E;

int kruskal() {
  sort(es, es + E, comp);
  UnionFind ut(V);

  int res = 0;
  for(int i = 0; i < E; i++) {
    edge e = es[i];
    if(!same(e.u, e.v)) {
      unite(e.u, e.v);
      res += e.cost;
    }
  }
  return res;
}
