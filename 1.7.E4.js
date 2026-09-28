"use strict";

const Lib = require(require("os").homedir() + "/cpp/lib.js");

{
    let price;
    let number;
    price = Number(Lib.input());
    number = Number(Lib.input());
    Lib.print("---\n");
    if (price * number <= 5000) {
        Lib.print("CAN\n");
    } else {
        Lib.print("CANNOT\n");
    }
}
