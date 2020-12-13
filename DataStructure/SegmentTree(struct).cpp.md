---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"DataStructure/SegmentTree(struct).cpp\"\ntemplate<typename\
    \ T>\nclass SegmentTree {\n\tprivate:\n\tint leaf_num = 1;\n\tconst T INF = numeric_limits<T>::max();\n\
    \tvector<T> seg;\n\n\tT func(T x, T y) {\n\t\treturn ;\n\t}\n\n\tT identity_element()\
    \ {\n\t\treturn ;\n\t}\n\n\n\tT get_interval(int a, int b, int k, int l, int r)\
    \ {\n\t\t//evaluate(k);\n    \tif(b <= l || r <= a) {\n    \t    return identity_element();\n\
    \    \t}\n    \tif(a <= l && r <= b) {\n     \t    return seg[k];\n    \t}\n \
    \   \tint lch = get_interval(a, b, k * 2 + 1, l, (l+r) / 2);\n    \tint rch =\
    \ get_interval(a, b, k * 2 + 2, (l+r) / 2, r);\n    \treturn func(lch, rch);\n\
    \t}\n\n\tvoid range_update(int a, int b, int x, int k, int l, int r) {\n\t\t//evaluate(k);\n\
    \t\tif(a <= l && r <= b) { // \u5168\u533A\u9593\u3092\u542B\u3080\u5834\u5408\
    \n\t\t\tlazy[k] = x;\n\t\t\tevaluate(k);\n\t\t} else if(a < r && l < b) { // \u4E00\
    \u90E8\u533A\u9593\u3092\u542B\u3080\u5834\u5408\n\t\t\trange_update(a, b, x,\
    \ k * 2 + 1, l, (l + r) / 2);  // left_child\n        \trange_update(a, b, x,\
    \ k * 2 + 2, (l + r) / 2, r); // right_child\n\t\t\tseg[k] = func(seg[k * 2 +\
    \ 1], seg[k * 2 + 2]);\n\t\t}\n\t}\n\n\tpublic:\n\tSegTree(int n) {\n\t\twhile(leaf_num\
    \ < n) {\n        \tleaf_num *= 2;\n    \t}\n\t\tseg.resize(leaf_num * 2);\n\t\
    }\n\n\tvoid set_vals(T vals[], int valsize) {\n\t\tfor(int i = 0; i < valsize;\
    \ i++) {\n        \tseg[i + leaf_num - 1] = vals[i];\n    \t}\n\t\t// build\n\
    \    \tfor(int i = leaf_num - 2; i >= 0; i--) {\n        \tseg[i] = func(seg[i\
    \ * 2 + 1], seg[i * 2 + 2]);\n    \t}\n\t}\n\n\t// 0-indexed\n\tvoid update(int\
    \ k, T x) {\n    \tk += leaf_num - 1;\n    \tseg[k] = x;\n\n    \twhile(k != 0)\
    \ {\n     \t   \tk = (k-1) / 2;\n      \t  \tseg[k] = func(seg[k*2+1], seg[k*2+2]);\n\
    \    \t}\n\t}\n\n\t// 0-indexed, [l, r)\n\tvoid range_update(int l, int r, int\
    \ x) {\n\t\trange_update(l, r, x, 0, 0, leaf_num);\n\t}\n\n\t// 0-indexed, [l,\
    \ r)\n\tT get_interval(int l, int r) {\n    \treturn get_interval(l, r - 1, 0,\
    \ 0, leaf_num);\n\t}\n};\n"
  code: "template<typename T>\nclass SegmentTree {\n\tprivate:\n\tint leaf_num = 1;\n\
    \tconst T INF = numeric_limits<T>::max();\n\tvector<T> seg;\n\n\tT func(T x, T\
    \ y) {\n\t\treturn ;\n\t}\n\n\tT identity_element() {\n\t\treturn ;\n\t}\n\n\n\
    \tT get_interval(int a, int b, int k, int l, int r) {\n\t\t//evaluate(k);\n  \
    \  \tif(b <= l || r <= a) {\n    \t    return identity_element();\n    \t}\n \
    \   \tif(a <= l && r <= b) {\n     \t    return seg[k];\n    \t}\n    \tint lch\
    \ = get_interval(a, b, k * 2 + 1, l, (l+r) / 2);\n    \tint rch = get_interval(a,\
    \ b, k * 2 + 2, (l+r) / 2, r);\n    \treturn func(lch, rch);\n\t}\n\n\tvoid range_update(int\
    \ a, int b, int x, int k, int l, int r) {\n\t\t//evaluate(k);\n\t\tif(a <= l &&\
    \ r <= b) { // \u5168\u533A\u9593\u3092\u542B\u3080\u5834\u5408\n\t\t\tlazy[k]\
    \ = x;\n\t\t\tevaluate(k);\n\t\t} else if(a < r && l < b) { // \u4E00\u90E8\u533A\
    \u9593\u3092\u542B\u3080\u5834\u5408\n\t\t\trange_update(a, b, x, k * 2 + 1, l,\
    \ (l + r) / 2);  // left_child\n        \trange_update(a, b, x, k * 2 + 2, (l\
    \ + r) / 2, r); // right_child\n\t\t\tseg[k] = func(seg[k * 2 + 1], seg[k * 2\
    \ + 2]);\n\t\t}\n\t}\n\n\tpublic:\n\tSegTree(int n) {\n\t\twhile(leaf_num < n)\
    \ {\n        \tleaf_num *= 2;\n    \t}\n\t\tseg.resize(leaf_num * 2);\n\t}\n\n\
    \tvoid set_vals(T vals[], int valsize) {\n\t\tfor(int i = 0; i < valsize; i++)\
    \ {\n        \tseg[i + leaf_num - 1] = vals[i];\n    \t}\n\t\t// build\n    \t\
    for(int i = leaf_num - 2; i >= 0; i--) {\n        \tseg[i] = func(seg[i * 2 +\
    \ 1], seg[i * 2 + 2]);\n    \t}\n\t}\n\n\t// 0-indexed\n\tvoid update(int k, T\
    \ x) {\n    \tk += leaf_num - 1;\n    \tseg[k] = x;\n\n    \twhile(k != 0) {\n\
    \     \t   \tk = (k-1) / 2;\n      \t  \tseg[k] = func(seg[k*2+1], seg[k*2+2]);\n\
    \    \t}\n\t}\n\n\t// 0-indexed, [l, r)\n\tvoid range_update(int l, int r, int\
    \ x) {\n\t\trange_update(l, r, x, 0, 0, leaf_num);\n\t}\n\n\t// 0-indexed, [l,\
    \ r)\n\tT get_interval(int l, int r) {\n    \treturn get_interval(l, r - 1, 0,\
    \ 0, leaf_num);\n\t}\n};"
  dependsOn: []
  isVerificationFile: false
  path: DataStructure/SegmentTree(struct).cpp
  requiredBy: []
  timestamp: '2020-12-13 19:14:48+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: DataStructure/SegmentTree(struct).cpp
layout: document
redirect_from:
- /library/DataStructure/SegmentTree(struct).cpp
- /library/DataStructure/SegmentTree(struct).cpp.html
title: DataStructure/SegmentTree(struct).cpp
---
