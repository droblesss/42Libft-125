/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:11:56 by drobles           #+#    #+#             */
/*   Updated: 2022/08/03 12:55:50 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	const char		*c;
	char			*d;

	c = src;
	d = dst;
	i = 0;
	if (c == NULL && d == NULL)
		return (NULL);
	while (i < n)
	{
		d[i] = c[i];
		i++;
	}
	return (d);
}
/*int	main(void)
{
	char s1[] = "";
	char s2[] = "ho";
	printf("%s\n", ft_memcpy(s1, s2, 3));
	printf("%s", memcpy(s1, s2, 3));
	return (0);
}*/
