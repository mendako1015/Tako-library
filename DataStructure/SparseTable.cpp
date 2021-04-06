template<typename T>
class SparseTable {
    vector<vector<T>> table;

    public:
    SparseTable(vector<T> &a) {
        int len = a.size();
        table = vector<vector<T>>(log2(len) + 1, vector<T>(len + 1));
        for(int i = 0; i < len; i++) {
            table[0][i + 1] = a[i];
        }
        // build
        for(int j = 1; j < (int)(log2(len) + 1); j++) {
            for(int i = 1; i + (1 << j) - 1 <= len; i++) {
                table[j][i] = min(table[j - 1][i], table[j - 1][i + (1 << (j - 1))]);
            }
        }
    }

    T query(int l, int r) {
        int d = log2(r - l + 1);
        return min(table[d][l], table[d][r - (1 << d) + 1]);
    }
};