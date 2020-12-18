---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: DataStructure/SegmentTree.cpp
    title: DataStructure/SegmentTree.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_D
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_D
  bundledCode: "#line 1 \"Test/AOJ/SegmentTree-RUQ.test.cpp\"\n#define PROBLEM \"\
    https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_D\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n#line 1 \"DataStructure/SegmentTree.cpp\"\ntemplate <class\
    \ T = int>\nclass SegmentTree {\n\tint leaf_num;\n\tbool is_lazy;\n\tvector<T>\
    \ data, lazy;\n\tvector<bool> lazy_changed;\n\tT operation_identity_element, update_identity_element;\n\
    \tfunction<T(T, T)> operation;\n\tfunction<T(T, T)> update_type;\n\tfunction<T(T,\
    \ int, int)> lazy_update;\n\n\tvoid evaluation(int pos, int btm, int tp) {\n\t\
    \tif(!lazy_changed[pos]) return ;\n\t\tdata[pos] = update_type(data[pos], lazy_update(lazy[pos],\
    \ btm, tp));\n\t\tif(tp - btm > 1) {\n\t\t\tlazy[pos * 2 + 1] = update_type(lazy[pos\
    \ * 2 + 1], lazy[pos]), lazy_changed[pos * 2 + 1] = true;\n\t\t\tlazy[pos * 2\
    \ + 2] = update_type(lazy[pos * 2 + 2], lazy[pos]), lazy_changed[pos * 2 + 2]\
    \ = true;\n\t\t}\n\t\tlazy[pos] = update_identity_element, lazy_changed[pos] =\
    \ false;\n\t}\n\n\tvoid range_update(int l, int r, T x, int pos, int btm, int\
    \ tp) {\n\t\tevaluation(pos, btm, tp);\n\t\tif(tp <= l || r <= btm) return ;\n\
    \t\tif(l <= btm && tp <= r) {\n\t\t\tlazy[pos] = update_type(lazy[pos], x), lazy_changed[pos]\
    \ = true;\n\t\t\tevaluation(pos, btm, tp);\n\t\t} else {\n\t\t\tint mid = (btm\
    \ + tp) / 2;\n\t\t\trange_update(l, r, x, pos * 2 + 1, btm, mid);\n\t\t\trange_update(l,\
    \ r, x, pos * 2 + 2, mid, tp);\n\t\t\tdata[pos] = operation(data[pos * 2 + 1],\
    \ data[pos * 2 + 2]);\n\t\t}\n\t}\n\n\t// point update query(0-indexed) : not\
    \ support lazy evaluation\n\tvoid point_update(int pos, T x) {\n\t\tpos += leaf_num\
    \ - 1;\n\t\tdata[pos] = update_type(data[pos], x);\n\t\twhile(pos > 0) {\n\t\t\
    \tpos = (pos - 1) / 2;\n\t\t\tdata[pos] = operation(data[pos * 2 + 1], data[pos\
    \ * 2 + 2]);\n\t\t}\n\t}\n\n\tT get_interval(int l, int r, int pos, int btm, int\
    \ tp) {\n\t\tif(tp <= l || r <= btm) return operation_identity_element;\n\t\t\
    if(is_lazy) evaluation(pos, btm, tp);\n\t\tif(l <= btm && tp <= r) return data[pos];\n\
    \t\tint mid = (btm + tp) / 2;\n\t\tT l_child = get_interval(l, r, 2 * pos + 1,\
    \ btm, mid);\n\t\tT r_child = get_interval(l, r, 2 * pos + 2, mid, tp);\n\t\t\
    return operation(l_child, r_child);\n\t}\n\n\tpublic:\n\tSegmentTree(size_t n,\
    \ bool lzy, T ope_id_el, T upd_id_el, function<T(T, T)> ope, function<T(T, T)>\
    \ upd, function<T(T, int, int)> lazy_upd)\n\t: is_lazy(lzy), operation_identity_element(ope_id_el),\
    \ update_identity_element(upd_id_el), operation(ope), update_type(upd), lazy_update(lazy_upd)\
    \ {\n\t\tleaf_num = 1;\n\t\twhile(leaf_num < n) leaf_num *= 2;\n\t\tdata = vector<T>(2\
    \ * leaf_num - 1, 0);\n\t\tlazy = vector<T>(2 * leaf_num - 1, update_identity_element);\n\
    \t\tlazy_changed = vector<bool>(2 * leaf_num - 1, false);\n\t}\n\n\t// update\
    \ [pos] (0-indexed)\n\tvoid update(int pos, T x) {\n\t\tif(is_lazy) return range_update(pos,\
    \ pos + 1, x, 0, 0, leaf_num);\n\t\telse point_update(pos, x);\n\t}\n\n\t// update\
    \ [l, r) (0-indexed)\n\tvoid update(int l, int r, T x) {\n\t\tif(is_lazy) range_update(l,\
    \ r, x, 0, 0, leaf_num);\n\t\telse {\n\t\t\tfor(int i = l; i < r; i++) point_update(i,\
    \ x);\n\t\t}\n\t}\n\n\t// get [pos] (0-indexed)\n\tT get(int pos) {\n\t\treturn\
    \ get_interval(pos, pos + 1, 0, 0, leaf_num);\n\t}\n\n\t// get [l, r) (0-indexed)\n\
    \tT get(int l, int r) {\n\t\treturn get_interval(l, r, 0, 0, leaf_num);\n\t}\n\
    \n\tT operator[](int pos) {\n\t\treturn data[pos + leaf_num - 1];\n\t}\n\n\tvoid\
    \ print(int n) {\n\t\tfor(int i = 0; i < n; i++) cout << \"(\" << data[i + leaf_num\
    \ - 1] << \", \" << lazy[i + leaf_num - 1] << \"), \";\n\t\tcout << endl;\n\t\
    }\n};\n#line 6 \"Test/AOJ/SegmentTree-RUQ.test.cpp\"\ntypedef long long ll;\n\n\
    int main() {\n\tll n, q;\n\tcin >> n >> q;\n\tSegmentTree<ll> segtree(n+10, true,\
    \ 0, 0, \n\t[](ll x, ll y){ return x + y; },\n\t[](ll x, ll y){ return y; },\n\
    \t[](ll x, ll btm, ll tp){ return x * (tp - btm); });\n\n\tsegtree.update(0, n,\
    \ 2147483647);\n\twhile(q--) {\n\t\tint com;\n\t\tcin >> com;\n\t\tif(com == 0)\
    \ {\n\t\t\tll x, y, z;\n\t\t\tcin >> x >> y >> z;\n\t\t\tsegtree.update(x, ++y,\
    \ z);\n\t\t} else {\n\t\t\tll x, y, z;\n\t\t\tcin >> x;\n\t\t\tcout << segtree.get(x)\
    \ << endl;\n\t\t}\n\t\t// segtree.print(n);\n\t}\n\treturn 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_D\"\n\n\
    #include <bits/stdc++.h>\nusing namespace std;\n#include \"../../DataStructure/SegmentTree.cpp\"\
    \ntypedef long long ll;\n\nint main() {\n\tll n, q;\n\tcin >> n >> q;\n\tSegmentTree<ll>\
    \ segtree(n+10, true, 0, 0, \n\t[](ll x, ll y){ return x + y; },\n\t[](ll x, ll\
    \ y){ return y; },\n\t[](ll x, ll btm, ll tp){ return x * (tp - btm); });\n\n\t\
    segtree.update(0, n, 2147483647);\n\twhile(q--) {\n\t\tint com;\n\t\tcin >> com;\n\
    \t\tif(com == 0) {\n\t\t\tll x, y, z;\n\t\t\tcin >> x >> y >> z;\n\t\t\tsegtree.update(x,\
    \ ++y, z);\n\t\t} else {\n\t\t\tll x, y, z;\n\t\t\tcin >> x;\n\t\t\tcout << segtree.get(x)\
    \ << endl;\n\t\t}\n\t\t// segtree.print(n);\n\t}\n\treturn 0;\n}"
  dependsOn:
  - DataStructure/SegmentTree.cpp
  isVerificationFile: true
  path: Test/AOJ/SegmentTree-RUQ.test.cpp
  requiredBy: []
  timestamp: '2020-12-18 16:58:46+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Test/AOJ/SegmentTree-RUQ.test.cpp
layout: document
redirect_from:
- /verify/Test/AOJ/SegmentTree-RUQ.test.cpp
- /verify/Test/AOJ/SegmentTree-RUQ.test.cpp.html
title: Test/AOJ/SegmentTree-RUQ.test.cpp
---
