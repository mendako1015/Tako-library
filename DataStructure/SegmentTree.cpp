template <class T = int>
class SegmentTree {
	int leaf_num;
	bool is_lazy;
	vector<T> data;
	vector<T> lazy, lazy_changed;
	T identity_element;
	function<T(T, T)> operation;
	function<T(T, T)> update_type;
	// ex.) point add RSQ
	// SegmentTree<ll> segtree(n, 0, [](ll a, ll b) { return a + b; }, [](ll a, ll b) { return b; });

	void evaluation(int pos, int btm, int tp) {
		if(!lazy_changed[pos]) return ;
		if(tp - btm > 1) {
			lazy[pos * 2 + 1] = update_type(lazy[pos * 2 + 1], lazy[pos]), lazy_changed[pos * 2 + 1] = true;
			lazy[pos * 2 + 2] = update_type(lazy[pos * 2 + 2], lazy[pos]), lazy_changed[pos * 2 + 2] = true;
		}
		data[pos] = update_type(data[pos], lazy[pos]);
		lazy[pos] = identity_element, lazy_changed[pos] = false;
    }

	void range_update(int l, int r, T x, int pos, int btm, int tp) {
        evaluation(pos, btm, tp);
        if(tp <= l || r <= btm) return ;
        if(l <= btm && tp <= r) {
            lazy[pos] = update_type(lazy[pos], x), lazy_changed[pos] = true;
            evaluation(pos, btm, tp);
        } else {
            int mid = (btm + tp) / 2;
            range_update(l, r, x, pos * 2 + 1, btm, mid);
            range_update(l, r, x, pos * 2 + 2, mid, tp);
            data[pos] = operation(data[pos * 2 + 1], data[pos * 2 + 2]);
        }
    }

	T get_interval(int l, int r, int pos, int btm, int tp) {
		if(tp <= l || r <= btm) return identity_element;
		if(is_lazy) evaluation(pos, btm, tp);
		if(l <= btm && tp <= r) return data[pos];
		int mid = (btm + tp) / 2;
		T l_child = get_interval(l, r, 2 * pos + 1, btm, mid);
		T r_child = get_interval(l, r, 2 * pos + 2, mid, tp);
		return operation(l_child, r_child);
	}

	public:
	SegmentTree(size_t n, bool lzy, T id_el, function<T(T, T)> ope, function<T(T, T)> upd)
	: is_lazy(lzy), identity_element(id_el), operation(ope), update_type(upd) {
		leaf_num = 1;
		while(leaf_num < n) leaf_num *= 2;
		data = vector<T>(2 * leaf_num - 1, identity_element);
		lazy = vector<T>(2 * leaf_num - 1, identity_element);
		lazy_changed = vector<T>(2 * leaf_num - 1);
	}

	// point update query(0-indexed)
	void point_update(int pos, T x) {
		pos += leaf_num - 1;
		data[pos] = update_type(data[pos], x);
		while(pos > 0) {
			pos = (pos - 1) / 2;
			data[pos] = operation(data[pos * 2 + 1], data[pos * 2 + 2]);
		}
	}

	void range_update(int l, int r, T x) {
        range_update(l, r, x, 0, 0, leaf_num);
    }

	T get_point(int pos) {
		return get_interval(pos, pos + 1, 0, 0, leaf_num);
	}

	// get [l, r) (0-indexed)
	T get_interval(int l, int r) {
		return get_interval(l, r, 0, 0, leaf_num);
	}

	T operator[](int pos) {
		return data[pos + leaf_num - 1];
	}

	void print(int n) {
		for(int i = 0; i < n; i++) cout << "(" << data[i + leaf_num - 1] << ", " << lazy[i + leaf_num - 1] << "), ";
		cout << endl;
	}
};