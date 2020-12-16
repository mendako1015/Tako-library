---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: DataStructure/SegmentTree.cpp
    title: DataStructure/SegmentTree.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_B
  bundledCode: "#line 1 \"Test/AOJ/SegmentTree-RSQ.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_B\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n#line 1 \"DataStructure/SegmentTree.cpp\"\
    \ntemplate <class T = int>\nclass SegmentTree {\n\tint leaf_num;\n\tbool is_lazy;\n\
    \tvector<T> data;\n\tvector<T> lazy, lazy_changed;\n\tT identity_element;\n\t\
    function<T(T, T)> operation;\n\tfunction<T(T, T)> update_type;\n\t// ex.) point\
    \ add RSQ\n\t// SegmentTree<ll> segtree(n, 0, [](ll a, ll b) { return a + b; },\
    \ [](ll a, ll b) { return b; });\n\n\tvoid evaluation(int pos, int btm, int tp)\
    \ {\n\t\tif(!lazy_changed[pos]) return ;\n\t\tif(tp - btm > 1) {\n\t\t\tlazy[pos\
    \ * 2 + 1] = update_type(lazy[pos * 2 + 1], lazy[pos]), lazy_changed[pos * 2 +\
    \ 1] = true;\n\t\t\tlazy[pos * 2 + 2] = update_type(lazy[pos * 2 + 2], lazy[pos]),\
    \ lazy_changed[pos * 2 + 2] = true;\n\t\t}\n\t\tdata[pos] = update_type(data[pos],\
    \ lazy[pos]);\n\t\tlazy[pos] = identity_element, lazy_changed[pos] = false;\n\
    \    }\n\n\tvoid range_update(int l, int r, T x, int pos, int btm, int tp) {\n\
    \        evaluation(pos, btm, tp);\n        if(tp <= l || r <= btm) return ;\n\
    \        if(l <= btm && tp <= r) {\n            lazy[pos] = update_type(lazy[pos],\
    \ x), lazy_changed[pos] = true;\n            evaluation(pos, btm, tp);\n     \
    \   } else {\n            int mid = (btm + tp) / 2;\n            range_update(l,\
    \ r, x, pos * 2 + 1, btm, mid);\n            range_update(l, r, x, pos * 2 + 2,\
    \ mid, tp);\n            data[pos] = operation(data[pos * 2 + 1], data[pos * 2\
    \ + 2]);\n        }\n    }\n\n\tT get_interval(int l, int r, int pos, int btm,\
    \ int tp) {\n\t\tif(tp <= l || r <= btm) return identity_element;\n\t\tif(is_lazy)\
    \ evaluation(pos, btm, tp);\n\t\tif(l <= btm && tp <= r) return data[pos];\n\t\
    \tint mid = (btm + tp) / 2;\n\t\tT l_child = get_interval(l, r, 2 * pos + 1, btm,\
    \ mid);\n\t\tT r_child = get_interval(l, r, 2 * pos + 2, mid, tp);\n\t\treturn\
    \ operation(l_child, r_child);\n\t}\n\n\tpublic:\n\tSegmentTree(size_t n, bool\
    \ lzy, T id_el, function<T(T, T)> ope, function<T(T, T)> upd)\n\t: is_lazy(lzy),\
    \ identity_element(id_el), operation(ope), update_type(upd) {\n\t\tleaf_num =\
    \ 1;\n\t\twhile(leaf_num < n) leaf_num *= 2;\n\t\tdata = vector<T>(2 * leaf_num\
    \ - 1, identity_element);\n\t\tlazy = vector<T>(2 * leaf_num - 1, identity_element);\n\
    \t\tlazy_changed = vector<T>(2 * leaf_num - 1);\n\t}\n\n\t// point update query(0-indexed)\n\
    \tvoid point_update(int pos, T x) {\n\t\tpos += leaf_num - 1;\n\t\tdata[pos] =\
    \ update_type(data[pos], x);\n\t\twhile(pos > 0) {\n\t\t\tpos = (pos - 1) / 2;\n\
    \t\t\tdata[pos] = operation(data[pos * 2 + 1], data[pos * 2 + 2]);\n\t\t}\n\t\
    }\n\n\tvoid range_update(int l, int r, T x) {\n        range_update(l, r, x, 0,\
    \ 0, leaf_num);\n    }\n\n\tT get_point(int pos) {\n\t\treturn get_interval(pos,\
    \ pos + 1, 0, 0, leaf_num);\n\t}\n\n\t// get [l, r) (0-indexed)\n\tT get_interval(int\
    \ l, int r) {\n\t\treturn get_interval(l, r, 0, 0, leaf_num);\n\t}\n\n\tT operator[](int\
    \ pos) {\n\t\treturn data[pos + leaf_num - 1];\n\t}\n\n\tvoid print(int n) {\n\
    \t\tfor(int i = 0; i < n; i++) cout << \"(\" << data[i + leaf_num - 1] << \",\
    \ \" << lazy[i + leaf_num - 1] << \"), \";\n\t\tcout << endl;\n\t}\n};\n#line\
    \ 6 \"Test/AOJ/SegmentTree-RSQ.cpp\"\ntypedef long long ll;\n\nint main() {\n\t\
    ll n, q;\n\tcin >> n >> q;\n\tSegmentTree<ll> segtree(n+10, true, 0, [](ll x,\
    \ ll y){ return x + y; }, [](ll x, ll y){ return x + y; } );\n\tsegtree.range_update(0,\
    \ n, 0);\n\twhile(q--) {\n\t\tint com;\n\t\tcin >> com;\n\t\tif(com == 0) {\n\t\
    \t\tll x, y, z;\n\t\t\tcin >> x >> y;\n\t\t\tsegtree.point_update(--x, y);\n\t\
    \t} else {\n\t\t\tll x, y;\n\t\t\tcin >> x >> y;\n\t\t\tcout << segtree.get_interval(x,\
    \ y) << endl;\n\t\t}\n\t}\n\treturn 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_B\"\n\n\
    #include <bits/stdc++.h>\nusing namespace std;\n#include \"../../DataStructure/SegmentTree.cpp\"\
    \ntypedef long long ll;\n\nint main() {\n\tll n, q;\n\tcin >> n >> q;\n\tSegmentTree<ll>\
    \ segtree(n+10, true, 0, [](ll x, ll y){ return x + y; }, [](ll x, ll y){ return\
    \ x + y; } );\n\tsegtree.range_update(0, n, 0);\n\twhile(q--) {\n\t\tint com;\n\
    \t\tcin >> com;\n\t\tif(com == 0) {\n\t\t\tll x, y, z;\n\t\t\tcin >> x >> y;\n\
    \t\t\tsegtree.point_update(--x, y);\n\t\t} else {\n\t\t\tll x, y;\n\t\t\tcin >>\
    \ x >> y;\n\t\t\tcout << segtree.get_interval(x, y) << endl;\n\t\t}\n\t}\n\treturn\
    \ 0;\n}"
  dependsOn:
  - DataStructure/SegmentTree.cpp
  isVerificationFile: false
  path: Test/AOJ/SegmentTree-RSQ.cpp
  requiredBy: []
  timestamp: '2020-12-16 18:57:17+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Test/AOJ/SegmentTree-RSQ.cpp
layout: document
redirect_from:
- /library/Test/AOJ/SegmentTree-RSQ.cpp
- /library/Test/AOJ/SegmentTree-RSQ.cpp.html
title: Test/AOJ/SegmentTree-RSQ.cpp
---
