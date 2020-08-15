template<typename T>
class BinaryIndexedTree {
	private:
	vector<T> bit;
	int bit_siz;

	public:
	BinaryIndexedTree(int n) {
		size = n;
		bit.resize(n);
	}

	void update(int id, int x) {
		while(id <= bit_siz) {
			bit[i] += x;
			i += i & -i;
		}
	}

	T get_sum(int r) {
		int res = 0;
		while(i > 0) {
			res += bit[i];
			i -= i & -i;
		}
		return res;
	}
};