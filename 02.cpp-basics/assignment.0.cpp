/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   assignment.0.cpp                                  :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: harnakam <harnakam@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/05 13:13:05 by harnakam         #+#    #+#              */
/*   Updated: 2026/10/05 13:13:05 by harnakam        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
/* 値の割り当て文の例 */

int	main(void)
{
	cout << unitbuf << boolalpha;
	// 授業用の設定
	int	a;

	// 変数宣言．この時点で a に割り当てられるのは不定の値
	cout << a;
	cout << string("\n");
	a = 1;
	// a の値が 1 に更新される
	cout << a;
	// 1
	cout << string("\n");
	a = 2;
	// a の値が 1 から 2 に更新される
	cout << a;
	// 2
	cout << string("\n");
}
