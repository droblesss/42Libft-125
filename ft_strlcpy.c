/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:39:43 by drobles           #+#    #+#             */
/*   Updated: 2022/06/17 16:39:54 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:04:48 by drobles           #+#    #+#             */
/*   Updated: 2022/06/17 16:31:10 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_strlen(const char *str)
{
	int	c;

	c = 0;
	while (*str != '\0')
	{
		str++;
		c++;
	}
	return (c);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char *aux;
	size_t i;
	size_t srcsize;

	srcsize = ft_strlen(src);
	i = 0;
	aux = dst;
	while (i < dstsize)
	{
		aux = src;
		i++;
	}
	return(srcsize);
}
/*int main(void)
{
	char s1[] = "hola";
	char s2[] = "a8";
	printf("%zu\n", ft_strlcpy(s1, s2, 3));
	printf("%lu", strlcpy(s1, s2, 3));
	return (0);
	}*/







