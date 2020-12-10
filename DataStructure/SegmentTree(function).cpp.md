---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"DataStructure/SegmentTree(function).cpp\"\nint a[100000];\n\
    \nint leaf_num = 1;\nint seg[400000];\n\nint func(int x, int y) {\n    return\
    \ ;\n}\n\nint identity_element() {\n    return ;\n}\n\nvoid init(int n) {\n  \
    \  while(leaf_num < n) {\n        leaf_num *= 2;\n    }\n    for(int i = 0; i\
    \ < n; i++) {\n        seg[i + leaf_num - 1] = a[i];\n    }\n    for(int i = leaf_num\
    \ - 2; i >= 0; i--) {\n        seg[i] = func(seg[i*2+1], seg[i*2+2]);\n    }\n\
    }\n\nvoid update(int k, int x) {\n    k += leaf_num - 1;\n    seg[k] = x;\n\n\
    \    while(k != 0) {\n        k = (k-1) / 2;\n        seg[k] = func(seg[k*2+1],\
    \ seg[k*2+2]);\n    }\n}\n\nint _get_interval(int a, int b, int k, int l, int\
    \ r) {\n    if(b <= l || r <= a) {\n        return identity_element();\n    }\n\
    \    if(a <= l && r <= b) {\n        return seg[k];\n    }\n    int lch = _get_interval(a,\
    \ b, k * 2 + 1, l, (l+r) / 2);\n    int rch = _get_interval(a, b, k * 2 + 2, (l+r)\
    \ / 2, r);\n    return func(lch, rch);\n}\n\nint get_interval(int l, int r) {\n\
    \    return _get_interval(l - 1, r, 0, 0, leaf_num);\n}\n"
  code: "int a[100000];\n\nint leaf_num = 1;\nint seg[400000];\n\nint func(int x,\
    \ int y) {\n    return ;\n}\n\nint identity_element() {\n    return ;\n}\n\nvoid\
    \ init(int n) {\n    while(leaf_num < n) {\n        leaf_num *= 2;\n    }\n  \
    \  for(int i = 0; i < n; i++) {\n        seg[i + leaf_num - 1] = a[i];\n    }\n\
    \    for(int i = leaf_num - 2; i >= 0; i--) {\n        seg[i] = func(seg[i*2+1],\
    \ seg[i*2+2]);\n    }\n}\n\nvoid update(int k, int x) {\n    k += leaf_num - 1;\n\
    \    seg[k] = x;\n\n    while(k != 0) {\n        k = (k-1) / 2;\n        seg[k]\
    \ = func(seg[k*2+1], seg[k*2+2]);\n    }\n}\n\nint _get_interval(int a, int b,\
    \ int k, int l, int r) {\n    if(b <= l || r <= a) {\n        return identity_element();\n\
    \    }\n    if(a <= l && r <= b) {\n        return seg[k];\n    }\n    int lch\
    \ = _get_interval(a, b, k * 2 + 1, l, (l+r) / 2);\n    int rch = _get_interval(a,\
    \ b, k * 2 + 2, (l+r) / 2, r);\n    return func(lch, rch);\n}\n\nint get_interval(int\
    \ l, int r) {\n    return _get_interval(l - 1, r, 0, 0, leaf_num);\n}"
  dependsOn: []
  isVerificationFile: false
  path: DataStructure/SegmentTree(function).cpp
  requiredBy: []
  timestamp: '2020-12-05 06:50:48+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: DataStructure/SegmentTree(function).cpp
layout: document
redirect_from:
- /library/DataStructure/SegmentTree(function).cpp
- /library/DataStructure/SegmentTree(function).cpp.html
title: DataStructure/SegmentTree(function).cpp
---
