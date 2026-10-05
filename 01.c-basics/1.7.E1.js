"use strict";

const Lib = require(require("os").homedir() + "/cpp/lib.js");

{
    let a;
    let b;
    a = Number(Lib.input());
    b = Number(Lib.input());
    let mean = (a + b) / 2;
    Lib.print("---\n");
    Lib.print(mean);
    Lib.print("\n");
}
