---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"String/KMP.cpp\"\n// kmp(s, t)\n// s\u306B\u542B\u307E\u308C\
    \u308Bt\u306E\u500B\u6570\u3092\u8FD4\u3059\n\nvector<int> makeTable(const string&\
    \ s) {\n    int n = s.size();\n    vector<int> ret(n+1);\n    ret[0] = -1;\n \
    \   int j = -1;\n    for (int i = 0; i < n; i++) {\n        while (j >= 0 && s[i]\
    \ != s[j]) j = ret[j];\n        ret[i+1] = ++j;\n    }\n    return ret;\n}\n\n\
    vector<int> kmp(const string& str, const string& word) {\n    vector<int> table\
    \ = makeTable(word), ret;\n    int m = 0, i = 0, n = str.size();\n    while (m+i\
    \ < n) {\n        if (word[i] == str[m+i]) {\n            if (++i == (int)(word.size()))\
    \ {\n                ret.push_back(m);\n                m = m+i-table[i];\n  \
    \              i = table[i];\n            }\n        } else {\n            m =\
    \ m+i-table[i];\n            if (i > 0) i = table[i];\n        }\n    }\n    return\
    \ ret;\n}\n"
  code: "// kmp(s, t)\n// s\u306B\u542B\u307E\u308C\u308Bt\u306E\u500B\u6570\u3092\
    \u8FD4\u3059\n\nvector<int> makeTable(const string& s) {\n    int n = s.size();\n\
    \    vector<int> ret(n+1);\n    ret[0] = -1;\n    int j = -1;\n    for (int i\
    \ = 0; i < n; i++) {\n        while (j >= 0 && s[i] != s[j]) j = ret[j];\n   \
    \     ret[i+1] = ++j;\n    }\n    return ret;\n}\n\nvector<int> kmp(const string&\
    \ str, const string& word) {\n    vector<int> table = makeTable(word), ret;\n\
    \    int m = 0, i = 0, n = str.size();\n    while (m+i < n) {\n        if (word[i]\
    \ == str[m+i]) {\n            if (++i == (int)(word.size())) {\n             \
    \   ret.push_back(m);\n                m = m+i-table[i];\n                i =\
    \ table[i];\n            }\n        } else {\n            m = m+i-table[i];\n\
    \            if (i > 0) i = table[i];\n        }\n    }\n    return ret;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: String/KMP.cpp
  requiredBy: []
  timestamp: '2020-12-05 06:50:48+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: String/KMP.cpp
layout: document
redirect_from:
- /library/String/KMP.cpp
- /library/String/KMP.cpp.html
title: String/KMP.cpp
---
