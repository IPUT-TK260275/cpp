"use strict";
const Lib = require("../lib.js");
{
    Lib.print("Enter your name: ");
    let name;
    name = Lib.input();
    Lib.print("Hello, ");
    Lib.print(name);
    Lib.print("!\n");
}
