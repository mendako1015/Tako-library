template<typename T>
class SparseTable {
	vector<vector<T>> table;
	vector<int> lookup;
	function<T(T, T)> operation;

	public:
	SparseTable(const vector<T> &v, function<T(T, T)> ope): operation(ope) {
		int log_len = 0;
		while((1 << log_len) <= v.size()) ++log_len;
		table = vector<vector<T>>(log_len, vector<int>(1 << log_len));
		lookup = vector<int>(v.size() + 1);

		for(int i = 0; i < v.size(); i++) {
			table[0][i] = v[i];
		}
		for(int i = 1; i < log_len; i++) {
			for(int j = 0; j + (1 << i) <= (1 << log_len); j++) {
				table[i][j] = operation(table[i-1][j], table[i - 1][j + (1 << (i - 1))]);
			}
		}
		for(int i = 2; i < lookup.size(); i++) {
			lookup[i] = lookup[i >> 1] + 1;
		}
	}

	inline T query(int l, int r) {
		int b = lookup[r - l];
		return operation(table[b][l], table[b][r - (1 << b)]);
	}
};