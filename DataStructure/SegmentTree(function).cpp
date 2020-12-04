int a[100000];

int leaf_num = 1;
int seg[400000];

int func(int x, int y) {
    return ;
}

int identity_element() {
    return ;
}

void init(int n) {
    while(leaf_num < n) {
        leaf_num *= 2;
    }
    for(int i = 0; i < n; i++) {
        seg[i + leaf_num - 1] = a[i];
    }
    for(int i = leaf_num - 2; i >= 0; i--) {
        seg[i] = func(seg[i*2+1], seg[i*2+2]);
    }
}

void update(int k, int x) {
    k += leaf_num - 1;
    seg[k] = x;

    while(k != 0) {
        k = (k-1) / 2;
        seg[k] = func(seg[k*2+1], seg[k*2+2]);
    }
}

int _get_interval(int a, int b, int k, int l, int r) {
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

int get_interval(int l, int r) {
    return _get_interval(l - 1, r, 0, 0, leaf_num);
}