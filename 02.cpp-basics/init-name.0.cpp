/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   init-name.0.cpp                                   :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: harnakam <harnakam@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/05 13:13:16 by harnakam         #+#    #+#              */
/*   Updated: 2026/10/05 13:13:16 by harnakam        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int	main(void)
{
	cout << unitbuf << boolalpha;
	// 授業用の設定
	int	hourly_wage = 1200;

	// 時給
	int	hours0 = 79;

	// 従業員0の労働時間
	int	hours1 = 182;

	// 従業員1の労働時間
	string name0 = string("Alice");
	// 従業員0の名前
	string name1 = string("Bob");
	// 従業員1の名前
	int	salary0 = hourly_wage *hours0;

	// 従業員0の報酬
	cout << name0;
	cout << string(": ");
	cout << salary0;
	cout << string(" yen");
	cout << string("\n");
	int	salary1 = hourly_wage *hours1;

	// 従業員1の報酬
	cout << name1;
	cout << string(": ");
	cout << salary1;
	cout << string(" yen");
	cout << string("\n");
	cout << string("---");
	cout << string("\n");
	cout << string("Total: ");
	cout << salary0 + salary1;
	cout << string(" yen");
	cout << string("\n");
}
