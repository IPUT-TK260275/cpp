/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   iteration.0.cpp                                   :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: harnakam <harnakam@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/05 13:13:21 by harnakam         #+#    #+#              */
/*   Updated: 2026/10/05 13:13:21 by harnakam        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
// カウンタの応用： カウンタの値に基づく処理を行う例
// 0の2乗，1の2乗，2の2乗，…，10の2乗を反復を用いて各行に印字する．

int	main(void)
{
	cout << unitbuf << boolalpha;
	// 授業用の設定
	int	cnt = 0;

	// カウンタ（初期値は0）
	while (cnt <= 10)
	{
		// cnt <= 10 である間は繰り返す．
		cout << cnt * cnt;
		// cnt の2乗の値を印字する．
		cout << string("\n");
		cnt = cnt + 1;
		// 変数 cnt の値を1増やす．
	}
}
