/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joabarbo <joabarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 23:13:49 by tda-cost          #+#    #+#             */
/*   Updated: 2024/01/29 20:47:55 by joabarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	i;

	i = 1;
	while (nb > 0)
	{
		i = i * nb;
		nb --;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (i);
}
/*
int	main (void)
{
	printf("%i", ft_iterative_factorial(4));
}*/

