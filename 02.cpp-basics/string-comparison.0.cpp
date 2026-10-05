/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   string-comparison.0.cpp                           :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: harnakam <harnakam@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/05 13:13:41 by harnakam         #+#    #+#              */
/*   Updated: 2026/10/05 13:13:41 by harnakam        ###   ########.fr        */
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
	cout << string("\"apple\" == \"apple\"   >>   ");
	cout << (string("apple") == string("apple"));
	cout << string("\n");
	cout << string("\"apple\" == \"banana\"   >>   ");
	cout << (string("apple") == string("banana"));
	cout << string("\n");
	// 等しくない
	cout << string("\"apple\" != \"apple\"   >>   ");
	cout << (string("apple") != string("apple"));
	cout << string("\n");
	cout << string("\"apple\" != \"banana\"   >>   ");
	cout << (string("apple") != string("banana"));
	cout << string("\n");
	// 小なり
	cout << string("\"banana\" < \"apple\"   >>   ");
	cout << (string("banana") < string("apple"));
	cout << string("\n");
	cout << string("\"apple\" < \"apple\"   >>   ");
	cout << (string("apple") < string("apple"));
	cout << string("\n");
	cout << string("\"apple\" < \"banana\"   >>   ");
	cout << (string("apple") < string("banana"));
	cout << string("\n");
	cout << string("\"apple\" < \"application\"   >>   ");
	cout << (string("apple") < string("application"));
	cout << string("\n");
	cout << string("\"apple\" < \"app\"   >>   ");
	cout << (string("apple") < string("app"));
	cout << string("\n");
	// 小なりイコール
	cout << string("\"banana\" <= \"apple\"   >>   ");
	cout << (string("banana") <= string("apple"));
	cout << string("\n");
	cout << string("\"apple\" <= \"apple\"   >>   ");
	cout << (string("apple") <= string("apple"));
	cout << string("\n");
	cout << string("\"apple\" <= \"banana\"   >>   ");
	cout << (string("apple") <= string("banana"));
	cout << string("\n");
	// 大なり
	cout << string("\"banana\" > \"apple\"   >>   ");
	cout << (string("banana") > string("apple"));
	cout << string("\n");
	cout << string("\"apple\" > \"apple\"   >>   ");
	cout << (string("apple") > string("apple"));
	cout << string("\n");
	cout << string("\"apple\" > \"banana\"   >>   ");
	cout << (string("apple") > string("banana"));
	cout << string("\n");
	cout << string("\"apple\" > \"application\"   >>   ");
	cout << (string("apple") > string("application"));
	cout << string("\n");
	cout << string("\"apple\" > \"app\"   >>   ");
	cout << (string("apple") > string("app"));
	cout << string("\n");
	// 大なりイコール
	cout << string("\"banana\" >= \"apple\"   >>   ");
	cout << (string("banana") >= string("apple"));
	cout << string("\n");
	cout << string("\"apple\" >= \"apple\"   >>   ");
	cout << (string("apple") >= string("apple"));
	cout << string("\n");
	cout << string("\"apple\" >= \"banana\"   >>   ");
	cout << (string("apple") >= string("banana"));
	cout << string("\n");
}
