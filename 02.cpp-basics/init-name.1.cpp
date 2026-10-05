/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   init-name.1.cpp                                   :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: harnakam <harnakam@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/05 13:13:19 by harnakam         #+#    #+#              */
/*   Updated: 2026/10/05 13:13:19 by harnakam        ###   ########.fr        */
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
	int		age = 18;
	double	height = 157.5;

	bool married = false;
	string name = string("Alice");
	cout << string("Name: ");
	cout << name;
	cout << string("\n");
	cout << string("Age: ");
	cout << age;
	cout << string("\n");
	cout << string("Height: ");
	cout << height;
	cout << string("\n");
	cout << string("Married: ");
	cout << married;
	cout << string("\n");
}
