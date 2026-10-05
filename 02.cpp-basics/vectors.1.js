"use strict";
const Lib = require("../lib.js");
// 配列の例
{
    let a = [1, 10, 100];         // 長さ3の配列
    let length = Lib.length(a);   // 配列 a の長さ
    // 配列 a の各要素の印字
    Lib.print("a: ");
    let i = 0;
    while (i < length) {
        if (i > 0) {
            Lib.print(", ");
        }
        Lib.print(a[i]);
        i = i + 1;
    }
    Lib.print(".\n");
    a[0] = 2;    // 配列 a の第 0 要素の値を 2 に更新する．
    Lib.print("a[0] updated.\n");
    // 配列 a の各要素の印字
    Lib.print("a: ");
    i = 0;
    while (i < length) {
        if (i > 0) {
            Lib.print(", ");
        }
        Lib.print(a[i]);
        i = i + 1;
    }
    Lib.print(".\n");
}
