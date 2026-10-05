/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   selection.0.cpp                                   :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: harnakam <harnakam@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/05 13:13:27 by harnakam         #+#    #+#              */
/*   Updated: 2026/10/05 13:13:30 by harnakam        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
/* if-else 文 の例 */

int	main(void)
{
	cout << unitbuf << boolalpha;
	// 授業用の設定
	cout << string("(points?) ");
	// 評定点 （0以上100以下）
	string line;
	getline(cin, line);
	int	points = stoi(line);

	// 入力された評定点に基づいて成績 (S, A, B, C, D or R) を印字する．
	if (points >= 90)
	{
		cout << string("S");
	}
	else if (points >= 80)
	{
		cout << string("A");
	}
	else if (points >= 70)
	{
		cout << string("B");
	}
	else if (points >= 60)
	{
		cout << string("C");
	}
	else
	{
		cout << ("D or R");
	}
	cout << string("\n");
}
