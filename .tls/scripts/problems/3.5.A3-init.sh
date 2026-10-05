#!/usr/bin/env bash
set -euo pipefail


PROBLEM_ID="3.5.A3"


BASE_DIR="cpp/.tls"
WORKING_DIR="${BASE_DIR}/problems/${PROBLEM_ID}"
rm -rf ~/"${WORKING_DIR}"
mkdir -p ~/"${WORKING_DIR}"
CASE_NUMBER=0


CASE_NUMBER=$((${CASE_NUMBER} + 1))
JUDGE_DIR="${WORKING_DIR}/judge/${CASE_NUMBER}"
mkdir -p ~/"${JUDGE_DIR}"
cat << "EOF" > ~/"${JUDGE_DIR}/input.txt"
1
10
100
1000
100
1000
10000

1000
EOF
cat << "EOF" > ~/"${JUDGE_DIR}/expected-output.txt"
vector<int> ns = {1, 10, 100, 1000, 100, 1000, 10000};
int k = 1000;
index_of(ns, k): 3
EOF
cat << "EOF" > ~/"${JUDGE_DIR}/transform.js"
"use strict";
const transform = (code) => {
    code = code.replace(/(^|[^A-Za-z0-9_])main([^A-Za-z0-9_])/g, "$1main0/*!RENAMED!*/$2");
    code += `

//!! Added for verification by TLS
int main() {
    cout << unitbuf << boolalpha;   // 授業用の設定
    vector<string> ss = {};
    vector<int> ns = {};
    string line;
    while (true) {
        getline(cin, line);
        if (line == "") {
            break;
        }
        ss.push_back(line);
        ns.push_back(stod(line));
    }
    getline(cin, line);
    int k = stoi(line);

    string out0 = "vector<int> ns = {";
    for (int i = 0; i < ss.size() - 1; i++) {
        out0 += ss[i] + ", ";
    }
    out0 += ss[ss.size() - 1] + "};";
    cout << out0 << "\\n";
    cout << "int k = " << k << ";\\n";

    int index = index_of(ns, k);
    cout << "index_of(ns, k): " << index << "\\n";
    return 0;
}
`;
    return code;
};
const fs = require('fs');
if (process.argv.length < 2) { process.exit(1); }
const codeFilename = process.argv[2];
const transformed = transform(fs.readFileSync(codeFilename, "utf8"));
process.stdout.write(transformed);
EOF
cat << "EOF" > ~/"${JUDGE_DIR}/verify.js"
"use strict";
const verify = (output) => {return output.trimEnd().match(/vector<int> ns = {1, 10, 100, 1000, 100, 1000, 10000};\nint k = 1000;\nindex_of\(ns, k\): 3\s*$/);};
const fs = require('fs');
const result = verify(fs.readFileSync("output.txt", "utf8"));
if (result) {
    process.stdout.write("1\n");
} else {
    process.stdout.write("0\n");
}
EOF

CASE_NUMBER=$((${CASE_NUMBER} + 1))
JUDGE_DIR="${WORKING_DIR}/judge/${CASE_NUMBER}"
mkdir -p ~/"${JUDGE_DIR}"
cat << "EOF" > ~/"${JUDGE_DIR}/input.txt"
2
3
5
7
11
13

9
EOF
cat << "EOF" > ~/"${JUDGE_DIR}/expected-output.txt"
vector<int> ns = {2, 3, 5, 7, 11, 13};
int k = 9;
index_of(ns, k): -1
EOF
cat << "EOF" > ~/"${JUDGE_DIR}/transform.js"
"use strict";
const transform = (code) => {
    code = code.replace(/(^|[^A-Za-z0-9_])main([^A-Za-z0-9_])/g, "$1main0/*!RENAMED!*/$2");
    code += `

//!! Added for verification by TLS
int main() {
    cout << unitbuf << boolalpha;   // 授業用の設定
    vector<string> ss = {};
    vector<int> ns = {};
    string line;
    while (true) {
        getline(cin, line);
        if (line == "") {
            break;
        }
        ss.push_back(line);
        ns.push_back(stod(line));
    }
    getline(cin, line);
    int k = stoi(line);

    string out0 = "vector<int> ns = {";
    for (int i = 0; i < ss.size() - 1; i++) {
        out0 += ss[i] + ", ";
    }
    out0 += ss[ss.size() - 1] + "};";
    cout << out0 << "\\n";
    cout << "int k = " << k << ";\\n";

    int index = index_of(ns, k);
    cout << "index_of(ns, k): " << index << "\\n";
    return 0;
}
`;
    return code;
};
const fs = require('fs');
if (process.argv.length < 2) { process.exit(1); }
const codeFilename = process.argv[2];
const transformed = transform(fs.readFileSync(codeFilename, "utf8"));
process.stdout.write(transformed);
EOF
cat << "EOF" > ~/"${JUDGE_DIR}/verify.js"
"use strict";
const verify = (output) => {return output.trimEnd().match(/vector<int> ns = {2, 3, 5, 7, 11, 13};\nint k = 9;\nindex_of\(ns, k\): -1\s*$/);};
const fs = require('fs');
const result = verify(fs.readFileSync("output.txt", "utf8"));
if (result) {
    process.stdout.write("1\n");
} else {
    process.stdout.write("0\n");
}
EOF
