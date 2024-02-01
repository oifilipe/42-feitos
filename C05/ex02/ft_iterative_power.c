/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joabarbo <joabarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:49:42 by tda-cost          #+#    #+#             */
/*   Updated: 2024/01/29 20:59:58 by joabarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	unsigned int	i;

	i = 1;
	while (power > 0)
	{
		i = i * nb;
		power --;
	}
	if (power < 0)
	{
		return (0);
	}
	return (i);
}

int	main(void)
{
	printf("%i", ft_iterative_power(1, 2));
}
