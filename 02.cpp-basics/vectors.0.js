"use strict";
const Lib = require("../lib.js");
// 配列リテラルと要素参照式の例
// 1以上30以下の整数 d を入力する．2025年6月d日の曜日を印字する．
{
    Lib.print("Input d: ");
    let d = Number(Lib.input());
    /*! 配列リテラルを1行で書くと見づらくなるときには次のように適当に改行して書きます．!*/
    let days = [
        "Saturday",  // 第0要素．d % 7 が 0 と等しいときに印字する．
        "Sunday",    // 第1要素．d % 7 が 1 と等しいときに印字する．
        "Monday",    // 第2要素．d % 7 が 2 と等しいときに印字する．
        "Tuesday",   // 第3要素．d % 7 が 3 と等しいときに印字する．
        "Wednesday", // 第4要素．d % 7 が 4 と等しいときに印字する．
        "Thursday",  // 第5要素．d % 7 が 5 と等しいときに印字する．
        "Friday"     // 第6要素．d % 7 が 6 と等しいときに印字する．
    ];
    Lib.print("June ");
    Lib.print(d);
    Lib.print(", 2025 is a ");
    Lib.print(days[d % 7]);
    Lib.print(".\n");
}
