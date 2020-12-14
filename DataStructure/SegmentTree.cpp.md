---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Test/SegmentTree-StaticRangeSum.test.cpp
    title: Test/SegmentTree-StaticRangeSum.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"DataStructure/SegmentTree.cpp\"\ntemplate <class T = int>\n\
    class SegmentTree {\n\tint leaf_num;\n\tvector<T> data;\n\tT identity_element;\n\
    \tfunction<T(T, T)> operation;\n\tfunction<T(T, T)> update_type;\n\t// ex.) point\
    \ add RSQ\n\t// SegmentTree<ll> segtree(n, 0, \n\t//\t\t[](ll a, ll b) { return\
    \ a + b; },\n    //\t\t[](ll a, ll b) { return b; });\n\n    T get_interval(int\
    \ l, int r, int pos, int btm, int tp) {\n        if(tp <= l || r <= btm) return\
    \ identity_element;\n        if(l <= btm && tp <= r) return data[pos];\n     \
    \   int mid = (btm + tp) / 2;\n        T l_child = get_interval(l, r, 2 * pos\
    \ + 1, btm, mid);\n        T r_child = get_interval(l, r, 2 * pos + 2, mid, tp);\n\
    \        return operation(l_child, r_child);\n    }\n\n\tpublic:\n\tSegmentTree(size_t\
    \ n, T id_el, function<T(T, T)> ope, function<T(T, T)> upd)\n\t: identity_element(id_el),\
    \ operation(ope), update_type(upd) {\n        leaf_num = 1;\n        while(leaf_num\
    \ < n) leaf_num *= 2;\n        data = vector<T>(2 * leaf_num - 1, identity_element);\n\
    \t}\n\n    // point update query(0-indexed)\n    void update(int pos, T x) {\n\
    \        pos += leaf_num - 1;\n        data[pos] = update_type(data[pos], x);\n\
    \        while(pos > 0) {\n            pos = (pos - 1) / 2;\n            data[pos]\
    \ = operation(data[pos * 2 + 1], data[pos * 2 + 2]);\n        }\n    }\n\n   \
    \ // get [l, r) (0-indexed)\n    T get_interval(int l, int r) {\n        return\
    \ get_interval(l, r, 0, 0, leaf_num);\n    }\n\n\tT operator[](int pos) {\n\t\t\
    return data[pos + leaf_num - 1];\n\t}\n};\n"
  code: "template <class T = int>\nclass SegmentTree {\n\tint leaf_num;\n\tvector<T>\
    \ data;\n\tT identity_element;\n\tfunction<T(T, T)> operation;\n\tfunction<T(T,\
    \ T)> update_type;\n\t// ex.) point add RSQ\n\t// SegmentTree<ll> segtree(n, 0,\
    \ \n\t//\t\t[](ll a, ll b) { return a + b; },\n    //\t\t[](ll a, ll b) { return\
    \ b; });\n\n    T get_interval(int l, int r, int pos, int btm, int tp) {\n   \
    \     if(tp <= l || r <= btm) return identity_element;\n        if(l <= btm &&\
    \ tp <= r) return data[pos];\n        int mid = (btm + tp) / 2;\n        T l_child\
    \ = get_interval(l, r, 2 * pos + 1, btm, mid);\n        T r_child = get_interval(l,\
    \ r, 2 * pos + 2, mid, tp);\n        return operation(l_child, r_child);\n   \
    \ }\n\n\tpublic:\n\tSegmentTree(size_t n, T id_el, function<T(T, T)> ope, function<T(T,\
    \ T)> upd)\n\t: identity_element(id_el), operation(ope), update_type(upd) {\n\
    \        leaf_num = 1;\n        while(leaf_num < n) leaf_num *= 2;\n        data\
    \ = vector<T>(2 * leaf_num - 1, identity_element);\n\t}\n\n    // point update\
    \ query(0-indexed)\n    void update(int pos, T x) {\n        pos += leaf_num -\
    \ 1;\n        data[pos] = update_type(data[pos], x);\n        while(pos > 0) {\n\
    \            pos = (pos - 1) / 2;\n            data[pos] = operation(data[pos\
    \ * 2 + 1], data[pos * 2 + 2]);\n        }\n    }\n\n    // get [l, r) (0-indexed)\n\
    \    T get_interval(int l, int r) {\n        return get_interval(l, r, 0, 0, leaf_num);\n\
    \    }\n\n\tT operator[](int pos) {\n\t\treturn data[pos + leaf_num - 1];\n\t\
    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: DataStructure/SegmentTree.cpp
  requiredBy: []
  timestamp: '2020-12-15 00:59:52+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Test/SegmentTree-StaticRangeSum.test.cpp
documentation_of: DataStructure/SegmentTree.cpp
layout: document
redirect_from:
- /library/DataStructure/SegmentTree.cpp
- /library/DataStructure/SegmentTree.cpp.html
title: DataStructure/SegmentTree.cpp
---
