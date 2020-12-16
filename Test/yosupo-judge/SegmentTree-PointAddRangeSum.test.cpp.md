---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes: {}
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 193, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 399, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 258, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: ../DataStructure/SegmentTree.cpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/point_add_range_sum\"\n\
    \n#include <bits/stdc++.h>\nusing namespace std;\n#include \"../DataStructure/SegmentTree.cpp\"\
    \ntypedef long long ll;\n\nint main() {\n\tint n, q;\n\tcin >> n >> q;\n\tSegmentTree<ll>\
    \ segtree(n, false, 0,\n\t\t[](ll a, ll b) { return a + b; },\n\t\t[](ll a, ll\
    \ b) { return a + b; });\n\tfor(int i = 0; i < n; i++) {\n\t\tint a;\n\t\tcin\
    \ >> a;\n\t\tsegtree.point_update(i, a);\n\t}\n\twhile(q--) {\n\t\tint cmd, x,\
    \ y;\n\t\tcin >> cmd >> x >> y;\n\t\tif(cmd == 0) segtree.point_update(x, y);\n\
    \t\telse cout << segtree.get_interval(x, y) << endl;\n\t}\n\treturn 0;\n}"
  dependsOn: []
  isVerificationFile: true
  path: Test/yosupo-judge/SegmentTree-PointAddRangeSum.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: Test/yosupo-judge/SegmentTree-PointAddRangeSum.test.cpp
layout: document
redirect_from:
- /verify/Test/yosupo-judge/SegmentTree-PointAddRangeSum.test.cpp
- /verify/Test/yosupo-judge/SegmentTree-PointAddRangeSum.test.cpp.html
title: Test/yosupo-judge/SegmentTree-PointAddRangeSum.test.cpp
---
