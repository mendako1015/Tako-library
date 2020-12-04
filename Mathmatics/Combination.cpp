vector<ll> fact;
 
void init_fact(int n) {
    fact = vector<ll>(n);
    fact[0] = 1;
    for (int i = 1; i < n; i++) fact[i] = fact[i - 1] * i % MOD;
}
 
ll calc_comb(ll n, ll r) {
    if (n < r)return 0;
    return calc_div(fact[n], fact[r] * fact[n - r] % MOD);
}