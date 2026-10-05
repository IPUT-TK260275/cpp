/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   1.7.A1.cpp                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: harnakam <harnakam@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/05 13:12:48 by harnakam         #+#    #+#              */
/*   Updated: 2026/10/05 13:12:48 by harnakam        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	double	value;
	double	sum = 0;
	int		count = 0;

	while (scanf("%lf", &value) == 1)
	{
		if (value == 0)
		{
			break ;
		}
		sum += value;
		count++;
		printf("> %.6f\n", sum / count);
	}
	return (0);
}
