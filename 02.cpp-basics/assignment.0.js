"use strict";
const Lib = require("../lib.js");
/* 値の割り当て文の例 */
{
    let a;          // 変数宣言．この時点で a に割り当てられるのは undefined
    Lib.print(a);   // undefined
    Lib.print("\n");
    a = 1;          // a の値が undefined から 1 に更新される
    Lib.print(a);   // 1
    Lib.print("\n");
    a = 2;          // a の値が 1 から 2 に更新される
    Lib.print(a);   // 2
    Lib.print("\n");
}
