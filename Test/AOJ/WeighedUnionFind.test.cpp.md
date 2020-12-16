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
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: ../DataStructure/WeightedUnionFind.cpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/1/DSL_1_B\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n#include \"../DataStructure/WeightedUnionFind.cpp\"\
    \n\nint main() {\n\tcin.tie(0);\n\tcout.tie(0);\n\tios::sync_with_stdio(false);\n\
    \n\tint n, q;\n\tcin >> n >> q;\n\tWeightedUnionFind<int> ut(n, 0);\n\twhile(q--)\
    \ {\n\t\tint type;\n\t\tcin >> type;\n\t\tif(type == 0) {\n\t\t\tint x, y, z;\n\
    \t\t\tcin >> x >> y >> z;\n\t\t\tut.unite(x, y, z);\n\t\t} else {\n\t\t\tint x,\
    \ y;\n\t\t\tcin >> x >> y;\n\t\t\tif(ut.same(x, y)) cout << ut.diff(x, y) << endl;\n\
    \t\t\telse cout << \"?\" << endl;\n\t\t}\n\t}\n\treturn 0;\n}\n"
  dependsOn: []
  isVerificationFile: true
  path: Test/AOJ/WeighedUnionFind.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: Test/AOJ/WeighedUnionFind.test.cpp
layout: document
redirect_from:
- /verify/Test/AOJ/WeighedUnionFind.test.cpp
- /verify/Test/AOJ/WeighedUnionFind.test.cpp.html
title: Test/AOJ/WeighedUnionFind.test.cpp
---
