/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   getline.0.cpp                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: harnakam <harnakam@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/05 13:13:11 by harnakam         #+#    #+#              */
/*   Updated: 2026/10/05 13:13:11 by harnakam        ###   ########.fr        */
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
	cout << string("Enter your name: ");
	string name;
	getline(cin, name);
	cout << string("Hello, ");
	cout << name;
	cout << string("!\n");
}
