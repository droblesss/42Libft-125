/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:50:02 by drobles           #+#    #+#             */
/*   Updated: 2022/07/01 18:22:47 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	pos;

	i = 0;
	j = 0;
	if (!*needle)
		return ((char *)haystack);
	if (*needle == *haystack && (size_t)ft_strlen(needle) < len)
		return ((char *)haystack);
	while (len > 0 && haystack[i])
	{
		pos = i;
		while (haystack[i] == needle[j] && len > 0)
		{
			i++;
			j++;
			len--;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[pos]);
		else
			j = 0;
		i = pos;
		i++;
		len--;
	}
	return (NULL);
}
/*int main(void)
{
	const char s1[] = "hola que tal";
	const char s2[] = "h";
	printf("%s\n", ft_strnstr(s1, s2, 1));
	printf("%s", strnstr(s1, s2, 1));
		return (0);
		}*/
