#!/usr/bin/env bash
set -euo pipefail


PROBLEM_ID="3.5.A2"


BASE_DIR="cpp/.tls"
WORKING_DIR="${BASE_DIR}/problems/${PROBLEM_ID}"
rm -rf ~/"${WORKING_DIR}"
mkdir -p ~/"${WORKING_DIR}"
CASE_NUMBER=0


CASE_NUMBER=$((${CASE_NUMBER} + 1))
JUDGE_DIR="${WORKING_DIR}/judge/${CASE_NUMBER}"
mkdir -p ~/"${JUDGE_DIR}"
cat << "EOF" > ~/"${JUDGE_DIR}/input.txt"
0.2
1.2
2.2
3.2

1.5
EOF
cat << "EOF" > ~/"${JUDGE_DIR}/expected-output.txt"
vector<double> ns = {0.2, 1.2, 2.2, 3.2};
double k = 1.5;
scale(ns, k): vector<double> {
  0.300000,
  1.800000,
  3.300000,
  4.800000
}
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
    vector<double> ns = {};
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
    double k = stod(line);

    string out0 = "vector<double> ns = {";
    for (int i = 0; i < ss.size() - 1; i++) {
        out0 += ss[i] + ", ";
    }
    out0 += ss[ss.size() - 1] + "};";
    cout << out0 << "\\n";
    cout << "double k = " << k << ";\\n";

    vector<double> bs = scale(ns, k);
    string out1 = "scale(ns, k): vector<double> {\\n";
    for (int i = 0; i < bs.size(); i++) {
        out1 += "  " + to_string(bs[i]);
        if (i + 1 < bs.size()) { out1 += ","; }
        out1 +="\\n";
    }
    out1 += "}";
    cout << out1 << "\\n";
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
const verify = (output) => {return output.trimEnd().match(/vector<double> ns = {0\.2, 1\.2, 2\.2, 3\.2};\ndouble k = 1\.5;\nscale\(ns, k\): vector<double> {\n  0\.30*,\n  1\.80*,\n  3\.30*,\n  4\.80*\n}\s*$/);};
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
12.3
23.4
34.5

6.7
EOF
cat << "EOF" > ~/"${JUDGE_DIR}/expected-output.txt"
vector<double> ns = {12.3, 23.4, 34.5};
double k = 6.7;
scale(ns, k): vector<double> {
  82.410000,
  156.780000,
  231.150000
}
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
    vector<double> ns = {};
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
    double k = stod(line);

    string out0 = "vector<double> ns = {";
    for (int i = 0; i < ss.size() - 1; i++) {
        out0 += ss[i] + ", ";
    }
    out0 += ss[ss.size() - 1] + "};";
    cout << out0 << "\\n";
    cout << "double k = " << k << ";\\n";

    vector<double> bs = scale(ns, k);
    string out1 = "scale(ns, k): vector<double> {\\n";
    for (int i = 0; i < bs.size(); i++) {
        out1 += "  " + to_string(bs[i]);
        if (i + 1 < bs.size()) { out1 += ","; }
        out1 +="\\n";
    }
    out1 += "}";
    cout << out1 << "\\n";
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
const verify = (output) => {return output.trimEnd().match(/vector<double> ns = {12\.3, 23\.4, 34\.5};\ndouble k = 6\.7;\nscale\(ns, k\): vector<double> {\n  82\.410*,\n  156\.780*,\n  231\.150*\n}\s*$/);};
const fs = require('fs');
const result = verify(fs.readFileSync("output.txt", "utf8"));
if (result) {
    process.stdout.write("1\n");
} else {
    process.stdout.write("0\n");
}
EOF
