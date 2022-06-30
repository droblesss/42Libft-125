/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:14:26 by drobles           #+#    #+#             */
/*   Updated: 2022/06/30 20:08:51 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	overnum(long long int c)
{
	if (c >= 9223372036854775807)
		return (-1);
	else if (c <= -9223372036854775807)
		return (0);
	return (c);
}

int	ft_atoi(const char *str)
{
	long long int		c;
	long long int		sign;
	long long int		numero;

	c = 0;
	sign = 0;
	numero = 0;
	while (str[c] == '\t' || str[c] == '\n' || str[c] == '\f'
		|| str[c] == '\r' || str[c] == ' ' || str[c] == '\v')
			c++;
	if (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			sign++;
		c++;
	}
	while (str[c] > 47 && str[c] < 58)
	{
		numero = numero * 10 + str[c] - 48;
		c++;
	}
	if (sign % 2 != 0)
		numero = numero * -1;
	numero = overnum(numero);
	return (numero);
}
int	main(void)
{
	char *s1 = " 99999999999999999999999999";
	printf("%d\n", ft_atoi(s1));
	printf("%d\n", atoi(s1));
	return (0);
}
