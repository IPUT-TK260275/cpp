/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   number-comparison.0.cpp                           :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: harnakam <harnakam@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/05 13:13:25 by harnakam         #+#    #+#              */
/*   Updated: 2026/10/05 13:13:25 by harnakam        ###   ########.fr        */
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
	// 等しい
	cout << string("1 == 1");
	cout << string("   >>   ");
	cout << (1 == 1);
	cout << string("\n");
	cout << string("1 == 2");
	cout << string("   >>   ");
	cout << (1 == 2);
	cout << string("\n");
	// 等しくない
	cout << string("1 != 1");
	cout << string("   >>   ");
	cout << (1 != 1);
	cout << string("\n");
	cout << string("1 != 2");
	cout << string("   >>   ");
	cout << (1 != 2);
	cout << string("\n");
	// 小なり
	cout << string("2 < 1");
	cout << string("   >>   ");
	cout << (2 < 1);
	cout << string("\n");
	cout << string("1 < 1");
	cout << string("   >>   ");
	cout << (1 < 1);
	cout << string("\n");
	cout << string("1 < 2");
	cout << string("   >>   ");
	cout << (1 < 2);
	cout << string("\n");
	// 小なりイコール
	cout << string("2 <= 1");
	cout << string("   >>   ");
	cout << (2 <= 1);
	cout << string("\n");
	cout << string("1 <= 1");
	cout << string("   >>   ");
	cout << (1 <= 1);
	cout << string("\n");
	cout << string("1 <= 2");
	cout << string("   >>   ");
	cout << (1 <= 2);
	cout << string("\n");
	// 大なり
	cout << string("2 > 1");
	cout << string("   >>   ");
	cout << (2 > 1);
	cout << string("\n");
	cout << string("1 > 1");
	cout << string("   >>   ");
	cout << (1 > 1);
	cout << string("\n");
	cout << string("1 > 2");
	cout << string("   >>   ");
	cout << (1 > 2);
	cout << string("\n");
	// 大なりイコール
	cout << string("2 >= 1");
	cout << string("   >>   ");
	cout << (2 >= 1);
	cout << string("\n");
	cout << string("1 >= 1");
	cout << string("   >>   ");
	cout << (1 >= 1);
	cout << string("\n");
	cout << string("1 >= 2");
	cout << string("   >>   ");
	cout << (1 >= 2);
	cout << string("\n");
}
