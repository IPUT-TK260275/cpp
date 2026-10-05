"use strict";

const Lib = require(require("os").homedir() + "/cpp/lib.js");

{
  let h;
  let m;
  let s;
  h = Number(Lib.input());
  m = Number(Lib.input());
  s = Number(Lib.input());
  let sec = 3600 * h + 60 * m + s;
  Lib.print("---\n");
  Lib.print(sec);
  Lib.print("\n");
}
