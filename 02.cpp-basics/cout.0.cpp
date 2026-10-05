/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   cout.0.cpp                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: harnakam <harnakam@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/05 13:13:10 by harnakam         #+#    #+#              */
/*   Updated: 2026/10/05 13:13:10 by harnakam        ###   ########.fr        */
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
	cout << 3.14;
	cout << string("\n");
	cout << 1 + 2;
	cout << string("\n");
	cout << true;
	cout << string("\n");
	cout << string("Hello, Alice!\n");
}
