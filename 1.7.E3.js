"use strict";

const Lib = require(require("os").homedir() + "/cpp/lib.js");

{
    let a;
    let b;
    a = Number(Lib.input());
    b = Number(Lib.input());
    Lib.print("---\n");
    if (a === b) {
        Lib.print("EQUAL\n");
    } else {
        Lib.print("NOT-EQUAL\n");
    }
}
