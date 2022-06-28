/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:11:56 by drobles           #+#    #+#             */
/*   Updated: 2022/06/28 19:11:32 by drobles          ###   ########.fr       */
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
	while (i < n)
	{
		d[i] = c[i];
		i++;
	}
	return (d);
}
/*int	main(void)
{
	char s1[] = "hola";
	char s2[] = "dios";
	return (0);
}*/
