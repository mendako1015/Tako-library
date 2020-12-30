---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes: {}
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 193, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: ../../string/RollingHash.cpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/14/ALDS1_14_B\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n#include \"../../string/RollingHash.cpp\"\
    \ntypedef long long ll;\n\nint main() {\n\tstring t, p;\n\tcin >> t >> p;\n\t\
    if(t.size() < p.size()) return 0;\n\tRollingHash<ll, 1000000007, 1777771> rt(t),\
    \ rp(p);\n\tfor(int i = 0; i < t.size() - p.size() + 1; i++) {\n\t\tif(rt.get(i,\
    \ i + p.size()) == rp) cout << i << endl;\n\t}\n\treturn 0;\n}"
  dependsOn: []
  isVerificationFile: true
  path: Test/AOJ/RollingHash.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: Test/AOJ/RollingHash.test.cpp
layout: document
redirect_from:
- /verify/Test/AOJ/RollingHash.test.cpp
- /verify/Test/AOJ/RollingHash.test.cpp.html
title: Test/AOJ/RollingHash.test.cpp
---
