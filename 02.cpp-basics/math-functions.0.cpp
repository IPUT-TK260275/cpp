/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   math-functions.0.cpp                              :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: harnakam <harnakam@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/05 13:13:23 by harnakam         #+#    #+#              */
/*   Updated: 2026/10/05 13:13:23 by harnakam        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cmath> // 数学関数用
#include <iomanip> // 印字桁数指定用
using namespace std;

int	main(void)
{
	cout << unitbuf << boolalpha;
	// 授業用の設定
	cout << abs(-2);
	cout << string("\n");
	cout << sqrt(3.0);
	cout << string("\n");
	cout << fixed << setprecision(15);
	// 実数を小数点以下15桁まで印字するよう設定
	cout << sqrt(200.0);
	cout << string("\n");
	cout << pow(2.0, 3.0);
	cout << string("\n");
	cout << floor(9.5);
	cout << string("\n");
	cout << ceil(9.5);
	cout << string("\n");
	cout << log(10.0);
	cout << string("\n");
}
