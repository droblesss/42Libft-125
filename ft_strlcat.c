/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 13:30:52 by drobles           #+#    #+#             */
/*   Updated: 2022/07/04 17:40:34 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	contador;

	i = ft_strlen(src);
	j = ft_strlen(dest);
	contador = 0;
	if (dstsize < j)
		return (i + dstsize);
	else if (dstsize > 0)
	{
		while (src[contador] && contador + j < dstsize - 1)
		{
			dest[j + contador] = src[contador];
		contador++;
		}
	}
	dest[j + contador] = '\0';
	return (i + j);
}
/*int main(void)
{
	char s1[] = "que tal";
	char s2[] = "hola";
	printf("%zu\n", ft_strlcat(s1, s2, 5));
	printf("%lu", strlcat(s1,s2, 5));
		return (0);
		}*/
