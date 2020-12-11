template<class T>
struct BIT {
	vector<T> bit;
	BIT(int n): bit(n+1, 0) {};

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
		T res = 0;
		while(pos) {
			res += bit[pos];
			pos -= pos & -pos;
		}
		return res;
	}
};