/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joabarbo <joabarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:06:00 by joabarbo          #+#    #+#             */
/*   Updated: 2024/01/26 21:07:51 by joabarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char	*str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int main()
{
	char example1[] = "HelloWorld";
	char example2[] = "12345";
	char example3[] = "Special@Characters";
	char example4[] = "";

	printf("%d\n", ft_str_is_alpha(example1));
	printf("%d\n", ft_str_is_alpha(example2));
	printf("%d\n", ft_str_is_alpha(example3));
	printf("%d\n", ft_str_is_alpha(example4));

	return 0;
}*/