---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"DataStructure/BinaryIndexedTree.cpp\"\ntemplate<class T>\n\
    struct BIT {\n\tvector<T> bit;\n\tBIT(int n): bit(n+1, 0) {};\n\n\tvoid add(int\
    \ pos, T val) {\n\t\tpos++;\n\t\twhile(pos < bit.size()) {\n\t\t\tbit[pos] +=\
    \ val;\n\t\t\tpos += pos & -pos;\n\t\t}\n\t}\n\t// sum[0, pos]\n\tT get(int pos)\
    \ {\n\t\tpos++;\n\t\tT res = 0;\n\t\twhile(pos) {\n\t\t\tres += bit[pos];\n\t\t\
    \tpos -= pos & -pos;\n\t\t}\n\t\treturn res;\n\t}\n};\n"
  code: "template<class T>\nstruct BIT {\n\tvector<T> bit;\n\tBIT(int n): bit(n+1,\
    \ 0) {};\n\n\tvoid add(int pos, T val) {\n\t\tpos++;\n\t\twhile(pos < bit.size())\
    \ {\n\t\t\tbit[pos] += val;\n\t\t\tpos += pos & -pos;\n\t\t}\n\t}\n\t// sum[0,\
    \ pos]\n\tT get(int pos) {\n\t\tpos++;\n\t\tT res = 0;\n\t\twhile(pos) {\n\t\t\
    \tres += bit[pos];\n\t\t\tpos -= pos & -pos;\n\t\t}\n\t\treturn res;\n\t}\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: DataStructure/BinaryIndexedTree.cpp
  requiredBy: []
  timestamp: '2020-12-11 07:15:56+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: DataStructure/BinaryIndexedTree.cpp
layout: document
redirect_from:
- /library/DataStructure/BinaryIndexedTree.cpp
- /library/DataStructure/BinaryIndexedTree.cpp.html
title: DataStructure/BinaryIndexedTree.cpp
---
