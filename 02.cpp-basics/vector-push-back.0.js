"use strict";
const Lib = require("../lib.js");
// 配列に要素を追加する例
{
    let a = [1, 10, 100, 1000];
    let length = Lib.length(a);
    Lib.print("a: ");
    let i = 0;
    while (i < length) {
        if (i > 0) {
            Lib.print(", ");
        }
        Lib.print(a[i]);
        i = i + 1;
    }
    Lib.print("\n");
    // 配列 a の末尾に 10000 を追加する．
    Lib.push(a, 10000);
    Lib.print("10000 pushed.\n");
    // この時点で配列 a は [1, 10, 100, 1000, 10000] となる．
    length = Lib.length(a);
    Lib.print("a: ");
    i = 0;
    while (i < length) {
        if (i > 0) {
            Lib.print(", ");
        }
        Lib.print(a[i]);
        i = i + 1;
    }
    Lib.print("\n");
}
