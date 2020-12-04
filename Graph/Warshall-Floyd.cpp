const int MAX_V = ;

int d[MAX_V][MAX_V];

void warshall_floyd(int V) { // Vは頂点数
  for(int k = 0; k < V; k++) {
    for(int i = 0; i < V; i++) {
      for(int j = 0; j < V; j++) {
        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
      }
    }
  }
}
