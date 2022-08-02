/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:14:26 by drobles           #+#    #+#             */
/*   Updated: 2022/08/02 11:48:04 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/*int	overnum(long long c, int sign)
{
	if ( sign == 0 && c >= 9223372036854775807)
		return (-1);
	else if (sign == 1 && c >= 9223372036854775807)
		return (0);
	return (c);
}*/

int	ft_atoi(const char *str)
{
	int		c;
	int		sign;
	size_t 	numero;

	c = 0;
	sign = 1;
	numero = 0;
	while (str[c] == '\t' || str[c] == '\n' || str[c] == '\f'
		|| str[c] == '\r' || str[c] == ' ' || str[c] == '\v')
			c++;
	if (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			sign *= -1;
		c++;
	}
	while (str[c] > 47 && str[c] < 58)
	{
		numero = numero * 10 + (str[c] - 48);
		c++;
	}
	if (numero > 9223372036854775807 && sign == 1)
		return (-1);
	else if (numero > 9223372036854775807 && sign == -1)
		return (0);
	return (numero * sign);
}
/*it	main(void)
{
	char *s1 = "-999999999999999999999999999";
	printf("ft %d\n", ft_atoi(s1));
	printf("a %d\n", atoi(s1));
	return (0);
}*/