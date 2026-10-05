/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   1.7.E5.cpp                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: harnakam <harnakam@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/05 13:12:37 by harnakam         #+#    #+#              */
/*   Updated: 2026/10/05 13:13:00 by harnakam        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	temp;
	int	a, b, c;

	scanf("%d%d%d", &a, &b, &c);
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (b > c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	printf("---\n");
	printf("%d-%d-%d\n", a, b, c);
	return (0);
}
