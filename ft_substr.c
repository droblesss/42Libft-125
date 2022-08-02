/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:33:33 by drobles           #+#    #+#             */
/*   Updated: 2022/07/22 17:29:58 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	size_t			i;
	size_t			j;
	unsigned int	slen;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	sub = (char*) malloc (sizeof(*s) * (len + 1));
	if (!sub)
		return (NULL);
	if (start >= slen)
		return (sub);
	while (len)
	{
		sub[j] = s[start];
			j++;
			start++;
			len--;
	}
	sub[j] = '\0';
	return (sub);
}
/*int main(void)
{
	char s1[] = "gigantesco";
	printf ("%s", ft_substr(s1, 50, 5));
	return(0);
}*/
