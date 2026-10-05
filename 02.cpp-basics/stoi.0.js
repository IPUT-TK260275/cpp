"use strict";
const Lib = require("../lib.js");
{
  let price;
  let number;
  let line; // 入力文字列読み取り用の変数
  Lib.print("Enter a price: ");
  line = Lib.input(); // キーボードから文字列を読み取る
  price = Number(line); // 数値に変換した値を変数priceに割り当てる
  Lib.print("Enter a number: ");
  line = Lib.input(); // キーボードから文字列を読み取る
  number = Number(line); // 数値に変換した値を変数numberに割り当てる
  Lib.print("You need ");
  Lib.print(price * number);
  Lib.print(" yen!\n");
}
