/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <drobles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:33:33 by drobles           #+#    #+#             */
/*   Updated: 2022/08/03 19:55:34 by drobles          ###   ########.fr       */
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
	if (start > slen)
		return (ft_strdup(""));
	if (len > slen)
		len = slen;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (j < len)
	{
		sub[j] = s[start];
			j++;
			start++;
	}
	sub[j] = '\0';
	return (sub);
}
/*int main(void)
{
	char s1[] = "lorem ipsum dolor sit amet";
	printf ("%s", ft_substr(s1, 400, 20));
	printf("%s", substr(s1, 5, 5));

	return(0);
}*/
