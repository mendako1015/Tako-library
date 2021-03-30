vector<int> fact;

int mod_pow(int A, int B, int mod = MOD) {
	if(!B) return 1;
	if(B & 1) return mod_pow(A, B - 1) * A % mod;
	int C = mod_pow(A, B >> 1);
	return C * C % mod;
}

void fact_init(int n, int mod = MOD) {
	fact.resize(n);
	fact[1] = 1;
	for(int i = 2; i < n; i++) fact[i] = fact[i - 1] * i % mod;
}

int comb(int n, int k, int mod = MOD) {
	return fact[n] * mod_pow(fact[n - k] * fact[k] % mod, mod - 2) % mod;
}