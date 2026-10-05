/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   string-concatenation.0.cpp                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: harnakam <harnakam@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/05 13:13:44 by harnakam         #+#    #+#              */
/*   Updated: 2026/10/05 13:14:38 by harnakam        ###   ########.fr        */
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
	string a = string("Hello");
	string b = string("Goodbye");
	// 結合演算
	string c = a + b;
	/*!
	* 変数 c には結合演算によって生成される文字列
	* string("HelloGoodbye") が割り当てられる．
	!*/
	cout << string("a: ");
	cout << a;
	cout << string("\n");
	cout << string("b: ");
	cout << b;
	cout << string("\n");
	cout << string("c: ");
	cout << c;
	cout << string("\n");
	// 3つ以上の文字列の結合
	cout << b + string(", old me. ") + a + string(", new me!\n");
}
