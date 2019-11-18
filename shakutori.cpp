const int MAX_N = ;

int n, S;
int a[MAX_N];

int solve(){
  int res = n + 1; // 条件を満たす区間の長さの最小値
  int s = 0, t = 0, sum = 0;
  for(;;) {
    while(t < n && sum < S) {
      sum += a[t];
      t++;
    }
    if(sum < S) break;
    res = min(res, t - s);
    sum -= a[s];
    s++;
  }
  if(res > n) {
    res = 0;
  }
  return res;
}
