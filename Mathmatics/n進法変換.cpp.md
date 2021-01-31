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
  bundledCode: "#line 1 \"Mathmatics/n\\u9032\\u6cd5\\u5909\\u63db.cpp\"\nclass Radix\
    \ {\nprivate:\n  const char* s;\n  int a[128];\npublic:\n  Radix(const char* s\
    \ = \"0123456789ABCDEF\") : s(s) {\n    int i;\n    for(i = 0; s[i]; ++i)\n  \
    \    a[(int)s[i]] = i;\n  }\n  string to(long long p, int q) {\n    int i;\n \
    \   if(!p)\n      return \"0\";\n    char t[64] = { };\n    for(i = 62; p; --i)\
    \ {\n      t[i] = s[p % q];\n      p /= q;\n    }\n    return string(t + i + 1);\n\
    \  }\n  std::string to(const std::string& t, int p, int q) {\n    return to(to(t,\
    \ p), q);\n  }\n  long long to(const std::string& t, int p) {\n    int i;\n  \
    \  long long sm = a[(int)t[0]];\n    for(i = 1; i < (int)t.length(); ++i)\n  \
    \    sm = sm * p + a[(int)t[i]];\n    return sm;\n  }\n};\n\n// Radix r;\n// \
    \    // 10 \u9032\u6570\u3092 n \u9032\u6587\u5B57\u5217\u306B\n//     std::cout\
    \ << r.to(255, 10) << std::endl; // => \"255\"\n//     std::cout << r.to(255,\
    \ 12) << std::endl; // => \"193\"\n//     std::cout << r.to(255, 16) << std::endl;\
    \ // => \"FF\"\n//\n//     // n \u9032\u6587\u5B57\u5217\u3092 10 \u9032\u6570\
    \u306B\n//     std::cout << r.to(\"255\", 10) << std::endl; // => 255\n//    \
    \ std::cout << r.to(\"255\", 14) << std::endl; // => 467\n//\n//     // n \u9032\
    \u6587\u5B57\u5217\u3092 m \u9032\u6587\u5B57\u5217\u306B\n//     std::cout <<\
    \ r.to(\"255\", 7, 11) << std::endl; // => \"116\"\n//     std::cout << r.to(\"\
    255\", 11, 7) << std::endl; // => \"611\"\n"
  code: "class Radix {\nprivate:\n  const char* s;\n  int a[128];\npublic:\n  Radix(const\
    \ char* s = \"0123456789ABCDEF\") : s(s) {\n    int i;\n    for(i = 0; s[i]; ++i)\n\
    \      a[(int)s[i]] = i;\n  }\n  string to(long long p, int q) {\n    int i;\n\
    \    if(!p)\n      return \"0\";\n    char t[64] = { };\n    for(i = 62; p; --i)\
    \ {\n      t[i] = s[p % q];\n      p /= q;\n    }\n    return string(t + i + 1);\n\
    \  }\n  std::string to(const std::string& t, int p, int q) {\n    return to(to(t,\
    \ p), q);\n  }\n  long long to(const std::string& t, int p) {\n    int i;\n  \
    \  long long sm = a[(int)t[0]];\n    for(i = 1; i < (int)t.length(); ++i)\n  \
    \    sm = sm * p + a[(int)t[i]];\n    return sm;\n  }\n};\n\n// Radix r;\n// \
    \    // 10 \u9032\u6570\u3092 n \u9032\u6587\u5B57\u5217\u306B\n//     std::cout\
    \ << r.to(255, 10) << std::endl; // => \"255\"\n//     std::cout << r.to(255,\
    \ 12) << std::endl; // => \"193\"\n//     std::cout << r.to(255, 16) << std::endl;\
    \ // => \"FF\"\n//\n//     // n \u9032\u6587\u5B57\u5217\u3092 10 \u9032\u6570\
    \u306B\n//     std::cout << r.to(\"255\", 10) << std::endl; // => 255\n//    \
    \ std::cout << r.to(\"255\", 14) << std::endl; // => 467\n//\n//     // n \u9032\
    \u6587\u5B57\u5217\u3092 m \u9032\u6587\u5B57\u5217\u306B\n//     std::cout <<\
    \ r.to(\"255\", 7, 11) << std::endl; // => \"116\"\n//     std::cout << r.to(\"\
    255\", 11, 7) << std::endl; // => \"611\"\n"
  dependsOn: []
  isVerificationFile: false
  path: "Mathmatics/n\u9032\u6CD5\u5909\u63DB.cpp"
  requiredBy: []
  timestamp: '2020-12-05 06:50:48+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: "Mathmatics/n\u9032\u6CD5\u5909\u63DB.cpp"
layout: document
redirect_from:
- "/library/Mathmatics/n\u9032\u6CD5\u5909\u63DB.cpp"
- "/library/Mathmatics/n\u9032\u6CD5\u5909\u63DB.cpp.html"
title: "Mathmatics/n\u9032\u6CD5\u5909\u63DB.cpp"
---
