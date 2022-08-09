/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <drobles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:39:43 by drobles           #+#    #+#             */
/*   Updated: 2022/08/05 11:11:29 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*aux;
	size_t	i;
	size_t	srcsize;

	srcsize = ft_strlen(src);
	i = 0;
	aux = (char *)src;
	if (dstsize > 0)
	{
		while (aux[i] && i < dstsize - 1)
		{
			dst[i] = aux[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}
/*int main(void)
{
	char s1[] = "hola";
	char s2[] = "moto";
	printf("%zu\n", ft_strlcpy(s1, s2, 3));
	printf("%lu", strlcpy(s1, s2, 3));
	return (0);
	}*/
