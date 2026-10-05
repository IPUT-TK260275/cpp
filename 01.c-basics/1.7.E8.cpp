/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   1.7.E8.cpp                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: harnakam <harnakam@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/05 13:12:41 by harnakam         #+#    #+#              */
/*   Updated: 2026/10/05 13:12:41 by harnakam        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;

	scanf("%d", &n);
	int	is_prime = (n >= 2);

	for (int i = 2; i <= n / i; i++)
	{
		if (n % i == 0)
		{
			is_prime = 0;
			break ;
		}
	}
	printf("---\n");
	if (is_prime)
	{
		printf("PRIME\n");
	}
	else
	{
		printf("NONPRIME\n");
	}
	return (0);
}
