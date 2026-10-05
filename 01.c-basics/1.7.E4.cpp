/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   1.7.E4.cpp                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: harnakam <harnakam@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/05 13:12:57 by harnakam         #+#    #+#              */
/*   Updated: 2026/10/05 13:12:57 by harnakam        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	price, number;

	scanf("%d%d", &price, &number);
	printf("---\n");
	if (1LL * price * number <= 5000)
	{
		printf("CAN\n");
	}
	else
	{
		printf("CANNOT\n");
	}
	return (0);
}
