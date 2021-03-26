---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Mathmatics/IntegerTheory.cpp
    title: Mathmatics/IntegerTheory.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_C
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_C
  bundledCode: "#line 1 \"Test/AOJ/LCM.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_C\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n#line 1 \"Mathmatics/IntegerTheory.cpp\"\
    \ntemplate <typename T>\nclass Integer {\nprivate:\n\tconst long mod = 1000000007;\n\
    \tbool primeflg;\n\tbool factorialflg;\n\tvector<T> prime_list;\n\tvector<T> factorial;\n\
    \tmap<T,long> factoring;\n\tvector<long> prime_num;\n\tvector<bool> prime_table;\n\
    \n\tvoid factorialModInit(T maxval) {\n\t\tfactorialflg = true;\n\t\tfactorial\
    \ = vector<T>(maxval+1); \n\t\tfactorial[0] = factorial[1] = 1;\n\t\tfor (T i\
    \ = 2;i < (maxval+1);i++) {\n\t\t\tfactorial[i] = (factorial[i-1]*i)%mod;\n\t\t\
    }\n\t}\n\npublic:\n\tInteger() : primeflg(false),factorialflg(false) {}\n\n\t\
    Integer(int n) : primeflg(false),factorialflg(false) {\n\t\tEratosthenes(n);\n\
    \t}\n\n\t//\u7D20\u6570\u95A2\u9023\n\tvoid Eratosthenes(T n) { // n\u4EE5\u4E0B\
    \u306E\u6570\u3067\u30A8\u30E9\u30C8\u30B9\u30C6\u30CD\u30B9\u306E\u3075\u308B\
    \u3044\u3092\u4F5C\u308B\u3002 \n\t\tprimeflg = true;\n\t\tprime_table = vector<bool>(n+1,true);\n\
    \t\tprime_num = vector<long>(n+1,0);\n\t\tT maxiter = sqrt(n);\n\t\tfor(T i =\
    \ 2;i < maxiter+1;i++){\n\t\t\tif (prime_table[i]) {\n\t\t\t\tfor (T j = (i +\
    \ i);j <= n;j += i){\n\t\t\t\t\tprime_table[j] = false;\n\t\t\t\t}\n\t\t\t}\n\t\
    \t}\n\t\tT prnum = 0;\n\t\tfor(T i = 2;i < n+1;i++){\n\t\t\tif (prime_table[i])\
    \ {\n\t\t\t\tprnum++;\n\t\t\t\tprime_list.push_back(i);\n\t\t\t}\n\t\t\tprime_num[i]\
    \ = prnum;\n\t\t}\n\t}\n\n\tbool isPrimeNum(T n) { //\u7D20\u6570\u304B\u3069\u3046\
    \u304B\u5224\u5B9A\n\t\tif (!primeflg) Eratosthenes(max(n,(T)100)); \n\t\treturn\
    \ prime_table[n];\n\t}\n\n\tvector<T>* getPrimeList(T n = 100){ //n\u4EE5\u4E0B\
    \u306E\u7D20\u6570\u30EA\u30B9\u30C8\n\t\tif (!primeflg) Eratosthenes(n); \n\t\
    \treturn (&prime_list);\n\t}\n\n\tlong getPrimeNumUnder_N(T n) { //n\u4EE5\u4E0B\
    \u306E\u7D20\u6570\u306E\u500B\u6570\u3002\n\t\tif (!primeflg) Eratosthenes(max(n,(T)100));\
    \ \n\t\treturn prime_num[n];\n\t}\n\n\tlong getPrimeNum_NM(T k,T m){  //k\u4EE5\
    \u4E0Am\u4EE5\u4E0B\u306E\u7D20\u6570\u306E\u500B\u6570\u3002(k\u306FN\u4EE5\u4E0B\
    \u306A\u3089ok)\n\t\tif (!primeflg) Eratosthenes(max(m,(T)100)); \n\t\treturn\
    \ prime_num[m] - prime_num[k];\n\t}\n\n\t//\u7D04\u6570\u500D\u6570\u95A2\u9023\
    \n\tmap<T,long>* getFactoring(T n) { // \u7D20\u56E0\u6570\u5206\u89E3 key->\u56E0\
    \u6570 val->\u56E0\u6570\u306E\u6570\n\t\tT copy_n = n;\n\t\tT maxiter = sqrt(n);\n\
    \t\tfor (T i = 2;i < maxiter+1;i ++) {\n\t\t\tif (copy_n == 1) break;\n\t\t\t\
    while (!(copy_n % i)) {\n\t\t\t\tif (IN(i,factoring)) factoring[i]++;\n\t\t\t\t\
    else factoring[i] = 1;\n\t\t\t\tcopy_n /= i;\n\t\t\t}\n\t\t}\n\t\treturn (&factoring);\n\
    \t}\n\n\tT gcd(T a,T b) {\n \t\t return b != 0 ? gcd(b, a % b) : a;\n\t}\n\n\t\
    T lcm(T a,T b) {\n  \t\treturn (a / gcd(a, b))*b;\n\t}\n\n\tlong getFactorial(T\
    \ n) { // n\u306E\u968E\u4E57\u306E\u5024\u3092\u6C42\u3081\u308B\u3002\n\t\t\
    if (!factorialflg) factorialModInit(n);\n\t\treturn factorial[n];\n\t}\n\n\tlong\
    \ long square_pow(long long a,long x){ // (a^x) % mod (\u7E70\u308A\u8FD4\u3057\
    \u4E8C\u4E57)\n\t\tT p = a;\n\t\tT q = 1LL;\n\t\twhile (x != 0){\n\t\t\tif (x\
    \ & 1) q = (q * p) % mod;\n\t\t\tp = (p * p) % mod;\n\t\t\tx >>= 1;\n\t\t}\t\n\
    \t\treturn q;\n\t}\n\n\tlong long mod_inv(long long a) { // a\u306E\u9006\u5143\
    \ % mod\n\t\treturn square_pow(a,mod-2);\n\t}\n\n       long long nCr(T n,T r)\
    \ { //\u666E\u901A\u306EnCr,mod\u3092\u53D6\u3089\u306A\u3044\u5834\u5408\u306F\
    \u3053\u3063\u3061\n\t\tif (r > n / 2)  r = n - r;\n\t\tlong long retval = 1;\n\
    \t\tfor (long i = 1;i < r+1;i ++){\n\t\t\tretval *= n - r + i;\n\t\t\tretval /=\
    \ i;\n\t\t}\n\t\treturn retval;\n\t}\n\n\tlong long nCrMod(T n,T r) { // nCr \u4F7F\
    \u7528\u524D\u306B\u521D\u671F\u5316\u5FC5\u8981\n\t\tif (!factorialflg) factorialModInit(n);\n\
    \t\treturn (((factorial[n]%mod * mod_inv(factorial[r]))%mod) * mod_inv(factorial[n-r]))%mod;\n\
    \t}\n\n\tlong long nPrMod(T n,T r) {\n\t\tif (!factorialflg) factorialModInit(n);\n\
    \t\treturn ((factorial[n]%mod) * mod_inv(factorial[n-r]))%mod;\n\t}\n};\n#line\
    \ 6 \"Test/AOJ/LCM.test.cpp\"\ntypedef long long ll;\n\nint main() {\n\tInteger<ll>\
    \ it(1010);\n\tint n;\n\tcin >> n;\n\tint ans = 1;\n\tfor(int i = 0; i < n; i++)\
    \ {\n\t\tint a;\n\t\tcin >> a;\n\t\tans = it.lcm(ans, a);\n\t}\n\tcout << ans\
    \ << endl;\n\treturn 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_C\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n#include \"../../Mathmatics/IntegerTheory.cpp\"\
    \ntypedef long long ll;\n\nint main() {\n\tInteger<ll> it(1010);\n\tint n;\n\t\
    cin >> n;\n\tint ans = 1;\n\tfor(int i = 0; i < n; i++) {\n\t\tint a;\n\t\tcin\
    \ >> a;\n\t\tans = it.lcm(ans, a);\n\t}\n\tcout << ans << endl;\n\treturn 0;\n\
    }"
  dependsOn:
  - Mathmatics/IntegerTheory.cpp
  isVerificationFile: true
  path: Test/AOJ/LCM.test.cpp
  requiredBy: []
  timestamp: '2021-03-26 10:55:19+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Test/AOJ/LCM.test.cpp
layout: document
redirect_from:
- /verify/Test/AOJ/LCM.test.cpp
- /verify/Test/AOJ/LCM.test.cpp.html
title: Test/AOJ/LCM.test.cpp
---
