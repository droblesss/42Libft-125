/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strim.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:19:59 by drobles           #+#    #+#             */
/*   Updated: 2022/08/03 16:29:56 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		size_s;
	char		*nueva;
	size_t		i;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	size_s = ft_strlen(s1);
	while (size_s && ft_strrchr(set, s1[size_s]))
		size_s--;
	nueva = ft_substr((char *)s1, 0, size_s + 1);
	return (nueva);
}
/*int main(void)
{
	const char s1[] = "EEEEEfrsta";
	const char set[] = "Eftiri\0a";
	printf("%s", ft_strtrim(s1, set));
	return (0);
	}*/
