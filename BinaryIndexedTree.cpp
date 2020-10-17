template<class T, T e>
struct BIT {
	vector<T> bit;
	BIT(int n): bit(n+1, e) {};

	void add(int pos, T val) {
		pos++;
		while(pos < bit.size()) {
			bit[pos] += val;
			pos += pos & -pos;
		}
	}
	// sum[0, pos]
	T get(int pos) {
		pos++;
		T res = e;
		while(pos < bit.size()) {
			res += bit[pos];
			pos -= pos & -pos;
		}
		return res;
	}
};
