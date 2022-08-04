/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <drobles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:50:02 by drobles           #+#    #+#             */
/*   Updated: 2022/08/04 10:53:10 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while ((needle[j]) && (haystack[i + j] == needle[j]) && ((i + j) < len))
				j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
/*int main(void)
{
	const char s1[] = "hola que tal";
	const char s2[] = "o";
	printf("%s\n", ft_strnstr(s1, s2, 2));
	printf("%s", strnstr(s1, s2, 2));
		return (0);
		}*/
