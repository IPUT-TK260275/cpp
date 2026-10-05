"use strict";
const Lib = require("../lib.js");
{
    let hourly_wage = 1200;   // 時給
    let hours0 = 79;   // 従業員0の労働時間
    let hours1 = 182;    // 従業員1の労働時間
    let name0 = "Alice";   // 従業員0の名前
    let name1 = "Bob";     // 従業員0の名前
    let salary0 = hourly_wage * hours0;   // 従業員0の報酬
    Lib.print(name0);
    Lib.print(": ");
    Lib.print(salary0);
    Lib.print(" yen");
    Lib.print("\n");
    let salary1 = hourly_wage * hours1;   // 従業員1の報酬
    Lib.print(name1);
    Lib.print(": ");
    Lib.print(salary1);
    Lib.print(" yen");
    Lib.print("\n");
    Lib.print("---");
    Lib.print("\n");
    Lib.print("Total: ");
    Lib.print(salary0 + salary1);
    Lib.print(" yen");
    Lib.print("\n");
}
