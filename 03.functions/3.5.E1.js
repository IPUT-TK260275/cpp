"use strict";
const Lib = require("../lib.js");
{
    let cost = (price, number) => {
        return price * number;
    };
    // 関数が正しく動作するかを確認するための計算を自分なりに考えて書きましょう．
    // 以下はその例です．
    let result0 = cost(160, 4);
    Lib.print(result0);         // 640 なら正しい
    Lib.print(" ");
    Lib.print(result0 === 640); // true が印字されることが期待される
    Lib.print("\n");
    let result1 = cost(180, 6);
    Lib.print(result1);         // 1080 なら正しい
    Lib.print(" ");
    Lib.print(result1 === 1080); // true が印字されることが期待される
    Lib.print("\n");
}
