struct Calc {
  int N;

  Calc(int n) {
    N = n;
  }

  int count() {
    vector<int> x(n + 1);
    int num = N;
    int res = 1;
    for(int i = 2; i <= n; i++) {
      while(num % i == 0) {
        x[i]++;
        num /= i;
      }
    }
    for(int i = 2; i <= n; i++) {
      res *= x[i] + 1;
    }
    return res;
  }
};
