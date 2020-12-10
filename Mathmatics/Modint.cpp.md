---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Mathmatics/Modint.cpp\"\ntemplate<int64_t MOD>\nclass ModInt\
    \ {\n\ttypedef int64_t T;\n\tT x;\n \n  public:\n\tModInt(){\n\t\tx=0;\n\t}\n\
    \ \n\tModInt(T value) {\n\t\tif (value < 0) value = (MOD - (-value) % MOD);\n\t\
    \tx = value % MOD;\n\t}\n \n\tModInt operator-() const {\n\t\treturn ModInt(-x);\n\
    \t}\n \n\tModInt& operator+=(const ModInt& p) {\n\t\tif ((x += p.get()) >= MOD)\
    \ x -= MOD;\n\t\treturn *this;\n\t}\n \n\tModInt& operator-=(const ModInt& p)\
    \ {\n\t\tif ((x += MOD - p.get()) >= MOD) x -= MOD;\n\t\treturn *this;\n\t}\n\
    \ \n\tModInt& operator*=(const ModInt& p) {\n\t\tx = x * p.get() % MOD;\n\t\t\
    return *this;\n\t}\n \n\tModInt& operator/=(const ModInt& p) {\n\t\t*this *= p.inverse();\n\
    \t\treturn *this;\n\t}\n \n\tModInt& operator+=(const T& p) {\n\t\treturn *this\
    \ += ModInt(p);\n\t}\n \n\tModInt& operator-=(const T& p) {\n\t\treturn *this\
    \ -= ModInt(p);\n\t}\n \n\tModInt& operator*=(const T& p) {\n\t\treturn *this\
    \ *= ModInt(p);\n\t}\n \n\tModInt& operator/=(const T& p) {\n\t\treturn *this\
    \ /= ModInt(p);\n\t}\n \n\tModInt operator+(const ModInt& p) const {\n\t\treturn\
    \ ModInt(*this) += p;\n\t}\n \n\tModInt operator-(const ModInt& p) const {\n\t\
    \treturn ModInt(*this) -= p;\n\t}\n \n\tModInt operator*(const ModInt& p) const\
    \ {\n\t\treturn ModInt(*this) *= p;\n\t}\n \n\tModInt operator/(const ModInt&\
    \ p) const {\n\t\treturn ModInt(*this) /= p;\n\t}\n \n\tModInt operator+(const\
    \ T& p) const {\n\t\treturn ModInt(*this) += p;\n\t}\n \n\tModInt operator-(const\
    \ T& p) const {\n\t\treturn ModInt(*this) -= p;\n\t}\n \n\tModInt operator*(const\
    \ T& p) const {\n\t\treturn ModInt(*this) *= p;\n\t}\n \n\tModInt operator/(const\
    \ T& p) const {\n\t\treturn ModInt(*this) /= p;\n\t}\n \n\tbool operator==(const\
    \ ModInt& p) const {\n\t\treturn x == p.get();\n\t}\n \n\tbool operator!=(const\
    \ ModInt& p) const {\n\t\treturn x != p.get();\n\t}\n \n\tbool operator==(const\
    \ T& p) const {\n\t\treturn x == ModInt(p);\n\t}\n \n\tbool operator!=(const T&\
    \ p) const{\n\t\treturn x != ModInt(p);\n\t}\n \n\tModInt inverse() const {\n\t\
    \tint a = x, b = MOD, u = 1, v = 0;\n\t\twhile (b) {\n\t\t\tint t = a / b;\n\t\
    \t\ta -= t * b;\n\t\t\tu -= t * v;\n\t\t\tswap(a, b);\n\t\t\tswap(u, v);\n\t\t\
    }\n\t\treturn ModInt(u);\n\t}\n \n\tT get() const{\n\t\treturn x;\n\t}\n \n"
  code: "template<int64_t MOD>\nclass ModInt {\n\ttypedef int64_t T;\n\tT x;\n \n\
    \  public:\n\tModInt(){\n\t\tx=0;\n\t}\n \n\tModInt(T value) {\n\t\tif (value\
    \ < 0) value = (MOD - (-value) % MOD);\n\t\tx = value % MOD;\n\t}\n \n\tModInt\
    \ operator-() const {\n\t\treturn ModInt(-x);\n\t}\n \n\tModInt& operator+=(const\
    \ ModInt& p) {\n\t\tif ((x += p.get()) >= MOD) x -= MOD;\n\t\treturn *this;\n\t\
    }\n \n\tModInt& operator-=(const ModInt& p) {\n\t\tif ((x += MOD - p.get()) >=\
    \ MOD) x -= MOD;\n\t\treturn *this;\n\t}\n \n\tModInt& operator*=(const ModInt&\
    \ p) {\n\t\tx = x * p.get() % MOD;\n\t\treturn *this;\n\t}\n \n\tModInt& operator/=(const\
    \ ModInt& p) {\n\t\t*this *= p.inverse();\n\t\treturn *this;\n\t}\n \n\tModInt&\
    \ operator+=(const T& p) {\n\t\treturn *this += ModInt(p);\n\t}\n \n\tModInt&\
    \ operator-=(const T& p) {\n\t\treturn *this -= ModInt(p);\n\t}\n \n\tModInt&\
    \ operator*=(const T& p) {\n\t\treturn *this *= ModInt(p);\n\t}\n \n\tModInt&\
    \ operator/=(const T& p) {\n\t\treturn *this /= ModInt(p);\n\t}\n \n\tModInt operator+(const\
    \ ModInt& p) const {\n\t\treturn ModInt(*this) += p;\n\t}\n \n\tModInt operator-(const\
    \ ModInt& p) const {\n\t\treturn ModInt(*this) -= p;\n\t}\n \n\tModInt operator*(const\
    \ ModInt& p) const {\n\t\treturn ModInt(*this) *= p;\n\t}\n \n\tModInt operator/(const\
    \ ModInt& p) const {\n\t\treturn ModInt(*this) /= p;\n\t}\n \n\tModInt operator+(const\
    \ T& p) const {\n\t\treturn ModInt(*this) += p;\n\t}\n \n\tModInt operator-(const\
    \ T& p) const {\n\t\treturn ModInt(*this) -= p;\n\t}\n \n\tModInt operator*(const\
    \ T& p) const {\n\t\treturn ModInt(*this) *= p;\n\t}\n \n\tModInt operator/(const\
    \ T& p) const {\n\t\treturn ModInt(*this) /= p;\n\t}\n \n\tbool operator==(const\
    \ ModInt& p) const {\n\t\treturn x == p.get();\n\t}\n \n\tbool operator!=(const\
    \ ModInt& p) const {\n\t\treturn x != p.get();\n\t}\n \n\tbool operator==(const\
    \ T& p) const {\n\t\treturn x == ModInt(p);\n\t}\n \n\tbool operator!=(const T&\
    \ p) const{\n\t\treturn x != ModInt(p);\n\t}\n \n\tModInt inverse() const {\n\t\
    \tint a = x, b = MOD, u = 1, v = 0;\n\t\twhile (b) {\n\t\t\tint t = a / b;\n\t\
    \t\ta -= t * b;\n\t\t\tu -= t * v;\n\t\t\tswap(a, b);\n\t\t\tswap(u, v);\n\t\t\
    }\n\t\treturn ModInt(u);\n\t}\n \n\tT get() const{\n\t\treturn x;\n\t}\n "
  dependsOn: []
  isVerificationFile: false
  path: Mathmatics/Modint.cpp
  requiredBy: []
  timestamp: '2020-12-05 06:50:48+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Mathmatics/Modint.cpp
layout: document
redirect_from:
- /library/Mathmatics/Modint.cpp
- /library/Mathmatics/Modint.cpp.html
title: Mathmatics/Modint.cpp
---
