const int MAX_V = ;
const int MAX_E = ;
bool negative = false; // 負閉路があるか否か

struct edge {
  int from, to, cost;
};

edge es[MAX_E];
int d[MAX_V];
int V, E; // 頂点数、辺数

void bellman_ford(int s) {
  for(int i = 0; i < V; i++) d[i] = INF;
  d[s] = 0;
  int counter = 0;

  for(int i = 0; i < V; i++) {
    bool update = false;
    for(int j = 0; j < E; j++) {
      edge e = es[j];
      if(d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
        d[e.to] = d[e.from] + e.cost;
        update = true;
      }
    }
    if(!update) break;
    if(i == V - 1) negative = true;
  }
}
