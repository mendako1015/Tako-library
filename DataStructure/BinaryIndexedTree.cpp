template<class T = int>
struct BinaryIndexedTree {
	int N;
	vector<T> bit;

	BinaryIndexedTree() : N(0) {}
	BinaryIndexedTree(int n) : N(n), bit(N + 1, 0) {}
	BinaryIndexedTree(int n, T init) : N(n), bit(N + 1, init) {}

	void add(int pos, T x) {
		pos++;
		while(pos <= N) {
			bit[pos] += x;
			pos += pos & -pos;
		}
	}

	T sum(int pos) {
		T ret = 0;
		while(pos > 0) {
			ret += bit[pos];
			pos -= pos & -pos;
		}
		return ret;
	}

	T sum(int l, int r) {
		return sum(r) - sum(l);
	}

	const T& operator[](const int &pos) const {
		return bit[pos];
	}
};