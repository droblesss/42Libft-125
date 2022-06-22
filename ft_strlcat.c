/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 13:30:52 by drobles           #+#    #+#             */
/*   Updated: 2022/06/20 14:12:44 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(src[i] !='\0' && dstsize > 0)
	{
		deist[j] = src[i];
		j++;
		i++;
		dstsize--;
	}
	dest[i] = '\0';
	return(i + j);
}
/*int main(void)
{
	char s1[] = "que tal";
	char s2[] = "hola";
	printf("%zu\n", ft_strlcat(s1, s2, 5));
	printf("%lu", strlcat(s1,s2, 5));
		return (0);
		}*/


