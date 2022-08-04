/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:05:51 by drobles           #+#    #+#             */
/*   Updated: 2022/08/03 12:56:31 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*aux1;
	unsigned char		*aux2;

	i = 0;
	aux1 = (unsigned char *)s1;
	aux2 = (unsigned char *)s2;
	while (i < n && n > 0)
	{
		if (aux1[i] != aux2[i])
			return (aux1[i] - aux2[i]);
		i++;
	}
	return (0);
}
/*int main(void)
{
	printf("%i\n", ft_memcmp("abcdefghij", "abcdefgxyz", 7));
	printf("%d\n", memcmp("abcdefghij", "abcdefgxyz", 7));
	return (0);
}*/
