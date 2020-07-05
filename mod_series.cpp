int mod_pow(int x, int pow) {
    if(pow == 0) return 1;
    int a = mod_pow(x, pow / 2);
    a = a * a % MOD;
    if(pow % 2 == 1) a *= x;
    return a % MOD;
}

int mod_div(int a, int b) {
    return a * mod_pow(b, MOD - 2) % MOD;
}

vector<int> fact;

void init_fact(int n) {
    fact = vector<int>(n);
    fact[0] = 1;
    for(int i = 1; i < n; i++) fact[i] = fact[i - 1] * i % MOD;
}

int calc_comb(int n, int r) {
    if(n < r) return 0;
    return mod_div(fact[n], fact[r] * fact[n - r] % MOD);
}