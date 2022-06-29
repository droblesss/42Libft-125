/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:05:51 by drobles           #+#    #+#             */
/*   Updated: 2022/06/29 15:57:30 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	int				j;
	unsigned char	*aux1;
	unsigned char	*aux2;

	i = 0;
	j = 0;
	aux1 = (unsigned char *)s1;
	aux2 = (unsigned char *)s2;
	if (aux1 == NULL || aux2 == NULL)
		return (0);
	while (n)
	{
		if (aux1[i] != aux2[j])
			return (aux1[i] - aux2[j]);
		i++;
		j++;
		n--;
	}
	return (0);
}
/*int main(void)
{
	printf("%i\n", ft_memcmp("abcdefghij", "abcdefgxyz", 7));
	printf("%d\n", memcmp("abcdefghij", "abcdefgxyz", 7));
	return (0);
}*/
