/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   1.7.E1.cpp                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: harnakam <harnakam@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/05 13:12:50 by harnakam         #+#    #+#              */
/*   Updated: 2026/10/05 13:12:50 by harnakam        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	double	a;
	double	b;

	scanf("%lf", &a);
	scanf("%lf", &b);
	double	mean = (a + b) / 2;

	printf("---\n");
	printf("%g\n", mean);
	return (0);
}
