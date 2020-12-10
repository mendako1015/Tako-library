---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"DataStructure/UnionFind-t.cpp\"\nclass UnionFind {\npublic:\n\
    \    vector<ll> par; // \u5404\u5143\u306E\u89AA\u3092\u8868\u3059\u914D\u5217\
    \n    vector<ll> siz; // \u7D20\u96C6\u5408\u306E\u30B5\u30A4\u30BA\u3092\u8868\
    \u3059\u914D\u5217(1 \u3067\u521D\u671F\u5316)\n\n    // Constructor\n    UnionFind(ll\
    \ sz_): par(sz_), siz(sz_, 1LL) {\n        for(ll i = 0; i < sz_; i++) par[i]\
    \ = i; // \u521D\u671F\u3067\u306F\u89AA\u306F\u81EA\u5206\u81EA\u8EAB\n    }\n\
    \    void init(ll sz_) {\n        par.resize(sz_);\n        siz.assign(sz_, 1LL);\
    \  // resize \u3060\u3068\u306A\u305C\u304B\u521D\u671F\u5316\u3055\u308C\u306A\
    \u304B\u3063\u305F\n        for(ll i = 0; i < sz_; i++) par[i] = i; // \u521D\u671F\
    \u3067\u306F\u89AA\u306F\u81EA\u5206\u81EA\u8EAB\n    }\n\n    // Member Function\n\
    \    // Find\n    ll root(ll x) { // \u6839\u306E\u691C\u7D22\n        while (par[x]\
    \ != x) {\n            x = par[x] = par[par[x]]; // x \u306E\u89AA\u306E\u89AA\
    \u3092 x \u306E\u89AA\u3068\u3059\u308B\n        }\n        return x;\n    }\n\
    \n    // Union(Unite, Merge)\n    bool unite(ll x, ll y) {\n        x = root(x);\n\
    \        y = root(y);\n        if (x == y) return false;\n        // merge technique\uFF08\
    \u30C7\u30FC\u30BF\u69CB\u9020\u3092\u30DE\u30FC\u30B8\u3059\u308B\u30C6\u30AF\
    \uFF0E\u5C0F\u3092\u5927\u306B\u304F\u3063\u3064\u3051\u308B\uFF09\n        if\
    \ (siz[x] < siz[y]) swap(x, y);\n        siz[x] += siz[y];\n        par[y] = x;\n\
    \        return true;\n    }\n\n    bool same(ll x, ll y) { // \u9023\u7D50\u5224\
    \u5B9A\n        return root(x) == root(y);\n    }\n\n    ll getsize(ll x) { //\
    \ \u7D20\u96C6\u5408\u306E\u30B5\u30A4\u30BA\n        return siz[root(x)];\n \
    \   }\n};\n"
  code: "class UnionFind {\npublic:\n    vector<ll> par; // \u5404\u5143\u306E\u89AA\
    \u3092\u8868\u3059\u914D\u5217\n    vector<ll> siz; // \u7D20\u96C6\u5408\u306E\
    \u30B5\u30A4\u30BA\u3092\u8868\u3059\u914D\u5217(1 \u3067\u521D\u671F\u5316)\n\
    \n    // Constructor\n    UnionFind(ll sz_): par(sz_), siz(sz_, 1LL) {\n     \
    \   for(ll i = 0; i < sz_; i++) par[i] = i; // \u521D\u671F\u3067\u306F\u89AA\u306F\
    \u81EA\u5206\u81EA\u8EAB\n    }\n    void init(ll sz_) {\n        par.resize(sz_);\n\
    \        siz.assign(sz_, 1LL);  // resize \u3060\u3068\u306A\u305C\u304B\u521D\
    \u671F\u5316\u3055\u308C\u306A\u304B\u3063\u305F\n        for(ll i = 0; i < sz_;\
    \ i++) par[i] = i; // \u521D\u671F\u3067\u306F\u89AA\u306F\u81EA\u5206\u81EA\u8EAB\
    \n    }\n\n    // Member Function\n    // Find\n    ll root(ll x) { // \u6839\u306E\
    \u691C\u7D22\n        while (par[x] != x) {\n            x = par[x] = par[par[x]];\
    \ // x \u306E\u89AA\u306E\u89AA\u3092 x \u306E\u89AA\u3068\u3059\u308B\n     \
    \   }\n        return x;\n    }\n\n    // Union(Unite, Merge)\n    bool unite(ll\
    \ x, ll y) {\n        x = root(x);\n        y = root(y);\n        if (x == y)\
    \ return false;\n        // merge technique\uFF08\u30C7\u30FC\u30BF\u69CB\u9020\
    \u3092\u30DE\u30FC\u30B8\u3059\u308B\u30C6\u30AF\uFF0E\u5C0F\u3092\u5927\u306B\
    \u304F\u3063\u3064\u3051\u308B\uFF09\n        if (siz[x] < siz[y]) swap(x, y);\n\
    \        siz[x] += siz[y];\n        par[y] = x;\n        return true;\n    }\n\
    \n    bool same(ll x, ll y) { // \u9023\u7D50\u5224\u5B9A\n        return root(x)\
    \ == root(y);\n    }\n\n    ll getsize(ll x) { // \u7D20\u96C6\u5408\u306E\u30B5\
    \u30A4\u30BA\n        return siz[root(x)];\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: DataStructure/UnionFind-t.cpp
  requiredBy: []
  timestamp: '2020-12-07 06:47:45+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: DataStructure/UnionFind-t.cpp
layout: document
redirect_from:
- /library/DataStructure/UnionFind-t.cpp
- /library/DataStructure/UnionFind-t.cpp.html
title: DataStructure/UnionFind-t.cpp
---
