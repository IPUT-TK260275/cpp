/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   string-find.0.cpp                                 :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: harnakam <harnakam@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/05 13:14:11 by harnakam         #+#    #+#              */
/*   Updated: 2026/10/05 13:16:48 by harnakam        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
/*
* # find 関数の例
*
* 姓と名を半角空白区切りで並べた文字列が入力される （例. "Naoko Yamada"）．
* 入力された文字列の半角空白の前と後の文字列，つまり姓と名をそれぞれ取得して
* 次の形式で印字する:
* "Hello, 《姓》 sensei. Can I call you 《名》?"
*/

int	main(void)
{
	cout << unitbuf << boolalpha;
	// 授業用の設定
	cout << string("Enter your full name: (e.g. \"Naoko Yamada\"): ");
	// 姓と名をローマ字で半角空白区切りで入力するものとする
	string name;
	getline(cin, name);
	// 文字列 name の長さ
	int	length = name.length();

	// 姓と名の間の半角空白のインデクス
	int	index_space = name.find(string(" "), 0);

	if (index_space == string :: npos)
	{
		// 空白が1つも含まれていない場合
		cout << string("Invalid name.\n");
	}
	else
	{
		// 姓 （0 文字目から index_space - 1 文字目まで）
		string first_name = name.substr(0, index_space - 0);
		// 名 （index_space + 1 文字目から length - 1 文字目まで）
		string last_name = name.substr(index_space + 1, length - (index_space + 1));
		cout << string("Hello, ") + last_name + string(" sensei.");
		cout << string(" Can I call you ") + first_name + string("?\n");
	}
}
