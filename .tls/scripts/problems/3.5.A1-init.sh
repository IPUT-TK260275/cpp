#!/usr/bin/env bash
set -euo pipefail


PROBLEM_ID="3.5.A1"


BASE_DIR="cpp/.tls"
WORKING_DIR="${BASE_DIR}/problems/${PROBLEM_ID}"
rm -rf ~/"${WORKING_DIR}"
mkdir -p ~/"${WORKING_DIR}"
CASE_NUMBER=0


CASE_NUMBER=$((${CASE_NUMBER} + 1))
JUDGE_DIR="${WORKING_DIR}/judge/${CASE_NUMBER}"
mkdir -p ~/"${JUDGE_DIR}"
cat << "EOF" > ~/"${JUDGE_DIR}/input.txt"
2
3
5
7
8

EOF
cat << "EOF" > ~/"${JUDGE_DIR}/expected-output.txt"
vector<double> ns = {2, 3, 5, 7, 8};
mean(ns) = 5
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
    string out = "vector<double> ns = {";
    for (int i = 0; i < ss.size() - 1; i++) {
        out += ss[i] + ", ";
    }
    out += ss[ss.size() - 1] + "};";

    cout << out << "\\n";
    cout << "mean(ns) = " << mean(ns) << "\\n";
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
const verify = (output) => {return output.trimEnd().match(/vector<double> ns = {2, 3, 5, 7, 8};\nmean\(ns\) = 5\s*$/);};
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
7.5
11.5
13.4

EOF
cat << "EOF" > ~/"${JUDGE_DIR}/expected-output.txt"
vector<double> ns = {7.5, 11.5, 13.4};
mean(ns) = 10.8
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
    string out = "vector<double> ns = {";
    for (int i = 0; i < ss.size() - 1; i++) {
        out += ss[i] + ", ";
    }
    out += ss[ss.size() - 1] + "};";

    cout << out << "\\n";
    cout << "mean(ns) = " << mean(ns) << "\\n";
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
const verify = (output) => {return output.trimEnd().match(/vector<double> ns = {7\.5, 11\.5, 13\.4};\nmean\(ns\) = 10\.8\s*$/);};
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
3.141
2.718

EOF
cat << "EOF" > ~/"${JUDGE_DIR}/expected-output.txt"
vector<double> ns = {3.141, 2.718};
mean(ns) = 2.9295
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
    string out = "vector<double> ns = {";
    for (int i = 0; i < ss.size() - 1; i++) {
        out += ss[i] + ", ";
    }
    out += ss[ss.size() - 1] + "};";

    cout << out << "\\n";
    cout << "mean(ns) = " << mean(ns) << "\\n";
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
const verify = (output) => {return output.trimEnd().match(/vector<double> ns = {3\.141, 2\.718};\nmean\(ns\) = 2\.9295\s*$/);};
const fs = require('fs');
const result = verify(fs.readFileSync("output.txt", "utf8"));
if (result) {
    process.stdout.write("1\n");
} else {
    process.stdout.write("0\n");
}
EOF
