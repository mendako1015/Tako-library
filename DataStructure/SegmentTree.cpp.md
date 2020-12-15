---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Test/SegmentTree-PointAddRangeSum.test.cpp
    title: Test/SegmentTree-PointAddRangeSum.test.cpp
  - icon: ':heavy_check_mark:'
    path: Test/SegmentTree-StaticRangeSum.test.cpp
    title: Test/SegmentTree-StaticRangeSum.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"DataStructure/SegmentTree.cpp\"\ntemplate <class T = int>\n\
    class SegmentTree {\n\tint leaf_num;\n\tbool is_lazy;\n\tvector<T> data;\n\tvector<T>\
    \ lazy;\n\tT identity_element;\n\tfunction<T(T, T)> operation;\n\tfunction<T(T,\
    \ T)> update_type;\n\t// ex.) point add RSQ\n\t// SegmentTree<ll> segtree(n, 0,\
    \ [](ll a, ll b) { return a + b; }, [](ll a, ll b) { return b; });\n\n\tvoid evaluation(int\
    \ pos) {\n        if(lazy[pos] == identity_element) return ;\n        if(pos <\
    \ leaf_num - 1) {\n            lazy[pos * 2 + 1] = update_type(lazy[pos * 2 +\
    \ 1], lazy[pos]);\n            lazy[pos * 2 + 2] = update_type(lazy[pos * 2 +\
    \ 2], lazy[pos]);\n        }\n        data[pos] = update_type(data[pos], lazy[pos]);\n\
    \        lazy[pos] = identity_element;\n    }\n\n\tvoid range_update(int l, int\
    \ r, T x, int pos, int btm, int tp) {\n        evaluation(pos);\n        if(tp\
    \ <= l || r <= btm) return ;\n        if(l <= btm && tp <= r) {\n            lazy[pos]\
    \ = x;\n            evaluation(pos);\n        } else {\n            int mid =\
    \ (btm + tp) / 2;\n            range_update(l, r, x, pos * 2 + 1, btm, mid);\n\
    \            range_update(l, r, x, pos * 2 + 2, mid, tp);\n            data[pos]\
    \ = operation(data[pos * 2 + 1], data[pos * 2 + 2]);\n        }\n    }\n\n\tT\
    \ get_interval(int l, int r, int pos, int btm, int tp) {\n\t\tif(is_lazy) evaluation(pos);\n\
    \t\tif(tp <= l || r <= btm) return identity_element;\n\t\tif(l <= btm && tp <=\
    \ r) return data[pos];\n\t\tint mid = (btm + tp) / 2;\n\t\tT l_child = get_interval(l,\
    \ r, 2 * pos + 1, btm, mid);\n\t\tT r_child = get_interval(l, r, 2 * pos + 2,\
    \ mid, tp);\n\t\treturn operation(l_child, r_child);\n\t}\n\n\tpublic:\n\tSegmentTree(size_t\
    \ n, bool lzy, T id_el, function<T(T, T)> ope, function<T(T, T)> upd)\n\t: is_lazy(lzy),\
    \ identity_element(id_el), operation(ope), update_type(upd) {\n\t\tleaf_num =\
    \ 1;\n\t\twhile(leaf_num < n) leaf_num *= 2;\n\t\tdata = vector<T>(2 * leaf_num\
    \ - 1, identity_element);\n\t\tlazy = vector<T>(2 * leaf_num - 1, identity_element);\n\
    \t}\n\n\t// point update query(0-indexed)\n\tvoid point_update(int pos, T x) {\n\
    \t\tpos += leaf_num - 1;\n\t\tdata[pos] = update_type(data[pos], x);\n\t\twhile(pos\
    \ > 0) {\n\t\t\tpos = (pos - 1) / 2;\n\t\t\tdata[pos] = operation(data[pos * 2\
    \ + 1], data[pos * 2 + 2]);\n\t\t}\n\t}\n\n\tvoid range_update(int l, int r, T\
    \ x) {\n        range_update(l, r, x, 0, 0, leaf_num);\n    }\n\n\tT get_point(int\
    \ pos) {\n\t\treturn get_interval(pos, pos + 1, 0, 0, leaf_num);\n\t}\n\n\t//\
    \ get [l, r) (0-indexed)\n\tT get_interval(int l, int r) {\n\t\treturn get_interval(l,\
    \ r, 0, 0, leaf_num);\n\t}\n\n\tT operator[](int pos) {\n\t\treturn data[pos +\
    \ leaf_num - 1];\n\t}\n\n\tvoid print(int n) {\n\t\tfor(int i = 0; i < n; i++)\
    \ cout << \"(\" << data[i + leaf_num - 1] << \", \" << lazy[i + leaf_num - 1]\
    \ << \"), \";\n\t\tcout << endl;\n\t}\n};\n"
  code: "template <class T = int>\nclass SegmentTree {\n\tint leaf_num;\n\tbool is_lazy;\n\
    \tvector<T> data;\n\tvector<T> lazy;\n\tT identity_element;\n\tfunction<T(T, T)>\
    \ operation;\n\tfunction<T(T, T)> update_type;\n\t// ex.) point add RSQ\n\t//\
    \ SegmentTree<ll> segtree(n, 0, [](ll a, ll b) { return a + b; }, [](ll a, ll\
    \ b) { return b; });\n\n\tvoid evaluation(int pos) {\n        if(lazy[pos] ==\
    \ identity_element) return ;\n        if(pos < leaf_num - 1) {\n            lazy[pos\
    \ * 2 + 1] = update_type(lazy[pos * 2 + 1], lazy[pos]);\n            lazy[pos\
    \ * 2 + 2] = update_type(lazy[pos * 2 + 2], lazy[pos]);\n        }\n        data[pos]\
    \ = update_type(data[pos], lazy[pos]);\n        lazy[pos] = identity_element;\n\
    \    }\n\n\tvoid range_update(int l, int r, T x, int pos, int btm, int tp) {\n\
    \        evaluation(pos);\n        if(tp <= l || r <= btm) return ;\n        if(l\
    \ <= btm && tp <= r) {\n            lazy[pos] = x;\n            evaluation(pos);\n\
    \        } else {\n            int mid = (btm + tp) / 2;\n            range_update(l,\
    \ r, x, pos * 2 + 1, btm, mid);\n            range_update(l, r, x, pos * 2 + 2,\
    \ mid, tp);\n            data[pos] = operation(data[pos * 2 + 1], data[pos * 2\
    \ + 2]);\n        }\n    }\n\n\tT get_interval(int l, int r, int pos, int btm,\
    \ int tp) {\n\t\tif(is_lazy) evaluation(pos);\n\t\tif(tp <= l || r <= btm) return\
    \ identity_element;\n\t\tif(l <= btm && tp <= r) return data[pos];\n\t\tint mid\
    \ = (btm + tp) / 2;\n\t\tT l_child = get_interval(l, r, 2 * pos + 1, btm, mid);\n\
    \t\tT r_child = get_interval(l, r, 2 * pos + 2, mid, tp);\n\t\treturn operation(l_child,\
    \ r_child);\n\t}\n\n\tpublic:\n\tSegmentTree(size_t n, bool lzy, T id_el, function<T(T,\
    \ T)> ope, function<T(T, T)> upd)\n\t: is_lazy(lzy), identity_element(id_el),\
    \ operation(ope), update_type(upd) {\n\t\tleaf_num = 1;\n\t\twhile(leaf_num <\
    \ n) leaf_num *= 2;\n\t\tdata = vector<T>(2 * leaf_num - 1, identity_element);\n\
    \t\tlazy = vector<T>(2 * leaf_num - 1, identity_element);\n\t}\n\n\t// point update\
    \ query(0-indexed)\n\tvoid point_update(int pos, T x) {\n\t\tpos += leaf_num -\
    \ 1;\n\t\tdata[pos] = update_type(data[pos], x);\n\t\twhile(pos > 0) {\n\t\t\t\
    pos = (pos - 1) / 2;\n\t\t\tdata[pos] = operation(data[pos * 2 + 1], data[pos\
    \ * 2 + 2]);\n\t\t}\n\t}\n\n\tvoid range_update(int l, int r, T x) {\n       \
    \ range_update(l, r, x, 0, 0, leaf_num);\n    }\n\n\tT get_point(int pos) {\n\t\
    \treturn get_interval(pos, pos + 1, 0, 0, leaf_num);\n\t}\n\n\t// get [l, r) (0-indexed)\n\
    \tT get_interval(int l, int r) {\n\t\treturn get_interval(l, r, 0, 0, leaf_num);\n\
    \t}\n\n\tT operator[](int pos) {\n\t\treturn data[pos + leaf_num - 1];\n\t}\n\n\
    \tvoid print(int n) {\n\t\tfor(int i = 0; i < n; i++) cout << \"(\" << data[i\
    \ + leaf_num - 1] << \", \" << lazy[i + leaf_num - 1] << \"), \";\n\t\tcout <<\
    \ endl;\n\t}\n};"
  dependsOn: []
  isVerificationFile: false
  path: DataStructure/SegmentTree.cpp
  requiredBy: []
  timestamp: '2020-12-15 22:17:43+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Test/SegmentTree-PointAddRangeSum.test.cpp
  - Test/SegmentTree-StaticRangeSum.test.cpp
documentation_of: DataStructure/SegmentTree.cpp
layout: document
redirect_from:
- /library/DataStructure/SegmentTree.cpp
- /library/DataStructure/SegmentTree.cpp.html
title: DataStructure/SegmentTree.cpp
---
