#!/usr/bin/env bash
set -euo pipefail


PROBLEM_ID="3.5.E3"


BASE_DIR="cpp/.tls"
WORKING_DIR="${BASE_DIR}/problems/${PROBLEM_ID}"
rm -rf ~/"${WORKING_DIR}"
mkdir -p ~/"${WORKING_DIR}"
CASE_NUMBER=0


CASE_NUMBER=$((${CASE_NUMBER} + 1))
JUDGE_DIR="${WORKING_DIR}/judge/${CASE_NUMBER}"
mkdir -p ~/"${JUDGE_DIR}"
cat << "EOF" > ~/"${JUDGE_DIR}/input.txt"
5
EOF
cat << "EOF" > ~/"${JUDGE_DIR}/expected-output.txt"
is_even(5) = false
EOF
cat << "EOF" > ~/"${JUDGE_DIR}/transform.js"
"use strict";
const transform = (code) => {
    code = code.replace(/(^|[^A-Za-z0-9_])main([^A-Za-z0-9_])/g, "$1main0/*!RENAMED!*/$2");
    code += `

//!! Added for verification by TLS
int main() {
    cout << unitbuf << boolalpha;   // 授業用の設定
    int n;
    cin >> n;
    cout << "is_even(" << n << ") = ";
    cout << is_even(n) << "\\n";
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
const verify = (output) => {return output.trimEnd().match(/is_even\(5\) = false\s*$/);};
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
6
EOF
cat << "EOF" > ~/"${JUDGE_DIR}/expected-output.txt"
is_even(5) = true
EOF
cat << "EOF" > ~/"${JUDGE_DIR}/transform.js"
"use strict";
const transform = (code) => {
    code = code.replace(/(^|[^A-Za-z0-9_])main([^A-Za-z0-9_])/g, "$1main0/*!RENAMED!*/$2");
    code += `

//!! Added for verification by TLS
int main() {
    cout << unitbuf << boolalpha;   // 授業用の設定
    int n;
    cin >> n;
    cout << "is_even(" << n << ") = ";
    cout << is_even(n) << "\\n";
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
const verify = (output) => {return output.trimEnd().match(/is_even\(6\) = true\s*$/);};
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
7
EOF
cat << "EOF" > ~/"${JUDGE_DIR}/expected-output.txt"
is_even(7) = false
EOF
cat << "EOF" > ~/"${JUDGE_DIR}/transform.js"
"use strict";
const transform = (code) => {
    code = code.replace(/(^|[^A-Za-z0-9_])main([^A-Za-z0-9_])/g, "$1main0/*!RENAMED!*/$2");
    code += `

//!! Added for verification by TLS
int main() {
    cout << unitbuf << boolalpha;   // 授業用の設定
    int n;
    cin >> n;
    cout << "is_even(" << n << ") = ";
    cout << is_even(n) << "\\n";
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
const verify = (output) => {return output.trimEnd().match(/is_even\(7\) = false\s*$/);};
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
8
EOF
cat << "EOF" > ~/"${JUDGE_DIR}/expected-output.txt"
is_even(8) = true 
EOF
cat << "EOF" > ~/"${JUDGE_DIR}/transform.js"
"use strict";
const transform = (code) => {
    code = code.replace(/(^|[^A-Za-z0-9_])main([^A-Za-z0-9_])/g, "$1main0/*!RENAMED!*/$2");
    code += `

//!! Added for verification by TLS
int main() {
    cout << unitbuf << boolalpha;   // 授業用の設定
    int n;
    cin >> n;
    cout << "is_even(" << n << ") = ";
    cout << is_even(n) << "\\n";
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
const verify = (output) => {return output.trimEnd().match(/is_even\(8\) = true\s*$/);};
const fs = require('fs');
const result = verify(fs.readFileSync("output.txt", "utf8"));
if (result) {
    process.stdout.write("1\n");
} else {
    process.stdout.write("0\n");
}
EOF
