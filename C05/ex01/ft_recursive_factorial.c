/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joabarbo <joabarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 23:28:54 by tda-cost          #+#    #+#             */
/*   Updated: 2024/01/29 20:55:20 by joabarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	unsigned int	i;

	i = 1;
	if (nb > 0)
	{
		i = nb * (ft_recursive_factorial(nb - 1));
		nb = nb - 1;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (i);
}

int	main(void)
{
	printf("%i", ft_recursive_factorial(5));
}

