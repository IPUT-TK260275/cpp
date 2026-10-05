"use strict";
const Lib = require("../lib.js");
// カウンタの応用： カウンタの値に基づく処理を行う例
// 0の2乗，1の2乗，2の2乗，…，10の2乗を反復を用いて各行に印字する．
{
    let cnt = 0;   // カウンタ（初期値は0）
    while (cnt <= 10) {         // cnt <= 10 である間は繰り返す．
        Lib.print(cnt * cnt);   // cnt の2乗の値を印字する．
        Lib.print("\n");
        cnt = cnt + 1;          // 変数 cnt の値を1増やす．
    }
}
