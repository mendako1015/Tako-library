---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"String/LongestCommonString.cpp\"\n// Longest Common String\n\
    // O(nm)\n\nint LCS(string s, string t) {\n\tint n = s.size();\n\tint m = t.size();\n\
    \tint dp[n + 10][m + 10] = {0};\n\n\tfor(int i = 0; i < n; i++) {\n\t\tfor(int\
    \ j = 0; j < m; j++) {\n\t\t\tif(s[i] == t[j]) {\n\t\t\t\tdp[i+1][j+1] = dp[i][j]\
    \ + 1;\n\t\t\t} else {\n\t\t\t\tdp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);\n\t\
    \t\t}\n\t\t}\n\t}\n\n\treturn dp[n][m];\n}\n"
  code: "// Longest Common String\n// O(nm)\n\nint LCS(string s, string t) {\n\tint\
    \ n = s.size();\n\tint m = t.size();\n\tint dp[n + 10][m + 10] = {0};\n\n\tfor(int\
    \ i = 0; i < n; i++) {\n\t\tfor(int j = 0; j < m; j++) {\n\t\t\tif(s[i] == t[j])\
    \ {\n\t\t\t\tdp[i+1][j+1] = dp[i][j] + 1;\n\t\t\t} else {\n\t\t\t\tdp[i+1][j+1]\
    \ = max(dp[i][j+1], dp[i+1][j]);\n\t\t\t}\n\t\t}\n\t}\n\n\treturn dp[n][m];\n\
    }\n"
  dependsOn: []
  isVerificationFile: false
  path: String/LongestCommonString.cpp
  requiredBy: []
  timestamp: '2020-12-05 06:50:48+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: String/LongestCommonString.cpp
layout: document
redirect_from:
- /library/String/LongestCommonString.cpp
- /library/String/LongestCommonString.cpp.html
title: String/LongestCommonString.cpp
---
