template<typename T>
class SegTree {
	private:
	int leaf_num = 1;
	const T INF = numeric_limits<T>::max();
	vector<T> seg;
	vector<T> lazy; // 遅延評価

	T func(T x, T y) {
		return ;
	}

	T identity_element() {
		return ;
	}

	// 遅延評価用
	void evaluate(int k) {
		if(lazy[k] == INF) return ;
		if(k < leaf_num-1) {
			lazy[k * 2 + 1] = lazy[k];
			lazy[k * 2 + 2] = lazy[k];
		}
		seg[k] = lazy[k];
		lazy[k] = INF;
	}

	T _get_interval(int a, int b, int k, int l, int r) {
		evaluate(k);
    	if(b <= l || r <= a) {
    	    return identity_element();
    	}
    	if(a <= l && r <= b) {
     	    return seg[k];
    	}
    	int lch = _get_interval(a, b, k * 2 + 1, l, (l+r) / 2);
    	int rch = _get_interval(a, b, k * 2 + 2, (l+r) / 2, r);
    	return func(lch, rch);
	}

	void _range_update(int a, int b, int x, int k, int l, int r) {
		evaluate(k);
		if(a <= l && r <= b) { // 全区間を含む場合
			lazy[k] = x;
			evaluate(k);
		} else if(a < r && l < b) { // 一部区間を含む場合
			_range_update(a, b, x, k * 2 + 1, l, (l + r) / 2);  // left_child
        	_range_update(a, b, x, k * 2 + 2, (l + r) / 2, r); // right_child
			seg[k] = func(seg[k * 2 + 1], seg[k * 2 + 2]);
		}
	}

	public:
	SegTree(int n) {
		while(leaf_num < n) {
        	leaf_num *= 2;
    	}
		seg.resize(leaf_num * 2);
		lazy.resize(leaf_num * 2);
		fill(lazy.begin(), lazy.end(), INF);
	}

	void set_vals(T vals[], int valsize) {
		for(int i = 0; i < valsize; i++) {
        	seg[i + leaf_num - 1] = vals[i];
    	}
		// build
    	for(int i = leaf_num - 2; i >= 0; i--) {
        	seg[i] = func(seg[i * 2 + 1], seg[i * 2 + 2]);
    	}
	}

	// 0-indexed
	void update(int k, T x) {
    	k += leaf_num - 1;
    	seg[k] = x;

    	while(k != 0) {
     	   	k = (k-1) / 2;
      	  	seg[k] = func(seg[k*2+1], seg[k*2+2]);
    	}
	}

	// 0-indexed, [l, r)
	void range_update(int l, int r, int x) {
		_range_update(l, r, x, 0, 0, leaf_num);
	}

	// 0-indexed, [l, r)
	T get_interval(int l, int r) {
    	return _get_interval(l, r - 1, 0, 0, leaf_num);
	}
};