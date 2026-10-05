/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   stoi.0.cpp                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: harnakam <harnakam@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/05 13:13:33 by harnakam         #+#    #+#              */
/*   Updated: 2026/10/05 13:13:40 by harnakam        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int	main(void)
{
	int	number;

	cout << unitbuf << boolalpha;
	// 授業用の設定
	int	price;

	string line;
	// 入力文字列読み取り用の変数
	cout << string("Enter a price: ");
	getline(cin, line);
	// キーボードから文字列を読み取る
	price = stoi(line);
	// 整数に変換した値をint型の変数priceに割り当てる
	cout << string("Enter a number: ");
	getline(cin, line);
	// キーボードから文字列を読み取る
	number = stoi(line);
	// 整数に変換した値をint型の変数numberに割り当てる
	cout << string("You need ");
	cout << price * number;
	cout << string(" yen!\n");
}
