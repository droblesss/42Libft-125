/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:14:26 by drobles           #+#    #+#             */
/*   Updated: 2022/06/20 17:26:50 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	c;
	int	sign;
	int	numero;

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
	return (numero);
}
/*int	main(void)
{
	char *s1 = "   -455";
	printf("%d", ft_atoi(s1));
	return (0);
}*/
