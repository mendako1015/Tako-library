template <typename T, T mod, T base>
class RollingHash {
	vector<T> hash, power;

	public:
	RollingHash(string &s) {
		int n = s.size();
		hash.assign(n+1, 0);
		power.assign(n+1, 1);
		for(int i = 0; i < n; i++) {
			hash[i+1] = (hash[i] * base + s[i]) % mod;
			power[i+1] = power[i] * base % mod;
		}
	}

	// get value of [l, r)
	T get(int l, int r) {
		int ret = hash[r] + mod - (hash[l] * power[r - l]) % mod;
		if(ret >= mod) ret -= mod;
		return ret;
	}

	operator T() {
		return hash.back();
	}
};