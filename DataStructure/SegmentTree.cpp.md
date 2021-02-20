---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Test/AOJ/SegmentTree-RAQ.test.cpp
    title: Test/AOJ/SegmentTree-RAQ.test.cpp
  - icon: ':heavy_check_mark:'
    path: Test/AOJ/SegmentTree-RMQ.test.cpp
    title: Test/AOJ/SegmentTree-RMQ.test.cpp
  - icon: ':heavy_check_mark:'
    path: Test/AOJ/SegmentTree-RMQandRAQ.test.cpp
    title: Test/AOJ/SegmentTree-RMQandRAQ.test.cpp
  - icon: ':heavy_check_mark:'
    path: Test/AOJ/SegmentTree-RMQandRUQ.test.cpp
    title: Test/AOJ/SegmentTree-RMQandRUQ.test.cpp
  - icon: ':heavy_check_mark:'
    path: Test/AOJ/SegmentTree-RSQ.test.cpp
    title: Test/AOJ/SegmentTree-RSQ.test.cpp
  - icon: ':heavy_check_mark:'
    path: Test/AOJ/SegmentTree-RSQandRAQ.test.cpp
    title: Test/AOJ/SegmentTree-RSQandRAQ.test.cpp
  - icon: ':heavy_check_mark:'
    path: Test/AOJ/SegmentTree-RSQandRUQ.test.cpp
    title: Test/AOJ/SegmentTree-RSQandRUQ.test.cpp
  - icon: ':heavy_check_mark:'
    path: Test/AOJ/SegmentTree-RUQ.test.cpp
    title: Test/AOJ/SegmentTree-RUQ.test.cpp
  - icon: ':heavy_check_mark:'
    path: Test/yosupo-judge/SegmentTree-PointAddRangeSum.test.cpp
    title: Test/yosupo-judge/SegmentTree-PointAddRangeSum.test.cpp
  - icon: ':heavy_check_mark:'
    path: Test/yosupo-judge/SegmentTree-StaticRMQ.test.cpp
    title: Test/yosupo-judge/SegmentTree-StaticRMQ.test.cpp
  - icon: ':heavy_check_mark:'
    path: Test/yosupo-judge/SegmentTree-StaticRangeSum.test.cpp
    title: Test/yosupo-judge/SegmentTree-StaticRangeSum.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"DataStructure/SegmentTree.cpp\"\ntemplate <class T = int>\n\
    class SegmentTree {\n\tint leaf_num;\n\tbool is_lazy;\n\tvector<T> data, lazy;\n\
    \tvector<bool> lazy_changed;\n\tT operation_identity_element, update_identity_element;\n\
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
    \t\tlazy_changed = vector<bool>(2 * leaf_num - 1, false);\n\t}\n\n\tvoid build(vector<int>\
    \ &v) {\n\t\tfor(int i = 0; i < v.size(); i++) data[i + leaf_num] = v[i];\n\t\t\
    for(int i = leaf_num - 1; i > 0; i--) data[i] = operation(data[i * 2 + 1], data[i\
    \ * 2 + 2]);\n\t}\n\n\t// update [pos] (0-indexed)\n\tvoid update(int pos, T x)\
    \ {\n\t\tif(is_lazy) return range_update(pos, pos + 1, x, 0, 0, leaf_num);\n\t\
    \telse point_update(pos, x);\n\t}\n\n\t// update [l, r) (0-indexed)\n\tvoid update(int\
    \ l, int r, T x) {\n\t\tif(is_lazy) range_update(l, r, x, 0, 0, leaf_num);\n\t\
    \telse {\n\t\t\tfor(int i = l; i < r; i++) point_update(i, x);\n\t\t}\n\t}\n\n\
    \t// get [pos] (0-indexed)\n\tT get(int pos) {\n\t\treturn get_interval(pos, pos\
    \ + 1, 0, 0, leaf_num);\n\t}\n\n\t// get [l, r) (0-indexed)\n\tT get(int l, int\
    \ r) {\n\t\treturn get_interval(l, r, 0, 0, leaf_num);\n\t}\n\n\tT operator[](int\
    \ pos) {\n\t\treturn data[pos + leaf_num - 1];\n\t}\n\n\tvoid print(int n) {\n\
    \t\tfor(int i = 0; i < n; i++) cout << \"(\" << data[i + leaf_num - 1] << \",\
    \ \" << lazy[i + leaf_num - 1] << \"), \";\n\t\tcout << endl;\n\t}\n};\n"
  code: "template <class T = int>\nclass SegmentTree {\n\tint leaf_num;\n\tbool is_lazy;\n\
    \tvector<T> data, lazy;\n\tvector<bool> lazy_changed;\n\tT operation_identity_element,\
    \ update_identity_element;\n\tfunction<T(T, T)> operation;\n\tfunction<T(T, T)>\
    \ update_type;\n\tfunction<T(T, int, int)> lazy_update;\n\n\tvoid evaluation(int\
    \ pos, int btm, int tp) {\n\t\tif(!lazy_changed[pos]) return ;\n\t\tdata[pos]\
    \ = update_type(data[pos], lazy_update(lazy[pos], btm, tp));\n\t\tif(tp - btm\
    \ > 1) {\n\t\t\tlazy[pos * 2 + 1] = update_type(lazy[pos * 2 + 1], lazy[pos]),\
    \ lazy_changed[pos * 2 + 1] = true;\n\t\t\tlazy[pos * 2 + 2] = update_type(lazy[pos\
    \ * 2 + 2], lazy[pos]), lazy_changed[pos * 2 + 2] = true;\n\t\t}\n\t\tlazy[pos]\
    \ = update_identity_element, lazy_changed[pos] = false;\n\t}\n\n\tvoid range_update(int\
    \ l, int r, T x, int pos, int btm, int tp) {\n\t\tevaluation(pos, btm, tp);\n\t\
    \tif(tp <= l || r <= btm) return ;\n\t\tif(l <= btm && tp <= r) {\n\t\t\tlazy[pos]\
    \ = update_type(lazy[pos], x), lazy_changed[pos] = true;\n\t\t\tevaluation(pos,\
    \ btm, tp);\n\t\t} else {\n\t\t\tint mid = (btm + tp) / 2;\n\t\t\trange_update(l,\
    \ r, x, pos * 2 + 1, btm, mid);\n\t\t\trange_update(l, r, x, pos * 2 + 2, mid,\
    \ tp);\n\t\t\tdata[pos] = operation(data[pos * 2 + 1], data[pos * 2 + 2]);\n\t\
    \t}\n\t}\n\n\t// point update query(0-indexed) : not support lazy evaluation\n\
    \tvoid point_update(int pos, T x) {\n\t\tpos += leaf_num - 1;\n\t\tdata[pos] =\
    \ update_type(data[pos], x);\n\t\twhile(pos > 0) {\n\t\t\tpos = (pos - 1) / 2;\n\
    \t\t\tdata[pos] = operation(data[pos * 2 + 1], data[pos * 2 + 2]);\n\t\t}\n\t\
    }\n\n\tT get_interval(int l, int r, int pos, int btm, int tp) {\n\t\tif(tp <=\
    \ l || r <= btm) return operation_identity_element;\n\t\tif(is_lazy) evaluation(pos,\
    \ btm, tp);\n\t\tif(l <= btm && tp <= r) return data[pos];\n\t\tint mid = (btm\
    \ + tp) / 2;\n\t\tT l_child = get_interval(l, r, 2 * pos + 1, btm, mid);\n\t\t\
    T r_child = get_interval(l, r, 2 * pos + 2, mid, tp);\n\t\treturn operation(l_child,\
    \ r_child);\n\t}\n\n\tpublic:\n\tSegmentTree(size_t n, bool lzy, T ope_id_el,\
    \ T upd_id_el, function<T(T, T)> ope, function<T(T, T)> upd, function<T(T, int,\
    \ int)> lazy_upd)\n\t: is_lazy(lzy), operation_identity_element(ope_id_el), update_identity_element(upd_id_el),\
    \ operation(ope), update_type(upd), lazy_update(lazy_upd) {\n\t\tleaf_num = 1;\n\
    \t\twhile(leaf_num < n) leaf_num *= 2;\n\t\tdata = vector<T>(2 * leaf_num - 1,\
    \ 0);\n\t\tlazy = vector<T>(2 * leaf_num - 1, update_identity_element);\n\t\t\
    lazy_changed = vector<bool>(2 * leaf_num - 1, false);\n\t}\n\n\tvoid build(vector<int>\
    \ &v) {\n\t\tfor(int i = 0; i < v.size(); i++) data[i + leaf_num] = v[i];\n\t\t\
    for(int i = leaf_num - 1; i > 0; i--) data[i] = operation(data[i * 2 + 1], data[i\
    \ * 2 + 2]);\n\t}\n\n\t// update [pos] (0-indexed)\n\tvoid update(int pos, T x)\
    \ {\n\t\tif(is_lazy) return range_update(pos, pos + 1, x, 0, 0, leaf_num);\n\t\
    \telse point_update(pos, x);\n\t}\n\n\t// update [l, r) (0-indexed)\n\tvoid update(int\
    \ l, int r, T x) {\n\t\tif(is_lazy) range_update(l, r, x, 0, 0, leaf_num);\n\t\
    \telse {\n\t\t\tfor(int i = l; i < r; i++) point_update(i, x);\n\t\t}\n\t}\n\n\
    \t// get [pos] (0-indexed)\n\tT get(int pos) {\n\t\treturn get_interval(pos, pos\
    \ + 1, 0, 0, leaf_num);\n\t}\n\n\t// get [l, r) (0-indexed)\n\tT get(int l, int\
    \ r) {\n\t\treturn get_interval(l, r, 0, 0, leaf_num);\n\t}\n\n\tT operator[](int\
    \ pos) {\n\t\treturn data[pos + leaf_num - 1];\n\t}\n\n\tvoid print(int n) {\n\
    \t\tfor(int i = 0; i < n; i++) cout << \"(\" << data[i + leaf_num - 1] << \",\
    \ \" << lazy[i + leaf_num - 1] << \"), \";\n\t\tcout << endl;\n\t}\n};"
  dependsOn: []
  isVerificationFile: false
  path: DataStructure/SegmentTree.cpp
  requiredBy: []
  timestamp: '2021-01-31 23:04:35+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Test/AOJ/SegmentTree-RUQ.test.cpp
  - Test/AOJ/SegmentTree-RAQ.test.cpp
  - Test/AOJ/SegmentTree-RSQandRUQ.test.cpp
  - Test/AOJ/SegmentTree-RMQandRAQ.test.cpp
  - Test/AOJ/SegmentTree-RSQandRAQ.test.cpp
  - Test/AOJ/SegmentTree-RMQ.test.cpp
  - Test/AOJ/SegmentTree-RMQandRUQ.test.cpp
  - Test/AOJ/SegmentTree-RSQ.test.cpp
  - Test/yosupo-judge/SegmentTree-StaticRMQ.test.cpp
  - Test/yosupo-judge/SegmentTree-StaticRangeSum.test.cpp
  - Test/yosupo-judge/SegmentTree-PointAddRangeSum.test.cpp
documentation_of: DataStructure/SegmentTree.cpp
layout: document
redirect_from:
- /library/DataStructure/SegmentTree.cpp
- /library/DataStructure/SegmentTree.cpp.html
title: DataStructure/SegmentTree.cpp
---
