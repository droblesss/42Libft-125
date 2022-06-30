/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 11:20:05 by drobles           #+#    #+#             */
/*   Updated: 2022/06/30 20:57:13 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*aux;

	aux = (unsigned char *) s;
	i = 0;
	while (n > i)
	{
		if (aux[i] == (unsigned char)c)
			return ((void *)&aux[i]);
		i++;
	}
	return (NULL);
}
/*int main(void)
{
	const char *s1 = "h\0ola";
	printf("%p\n", s1);
	printf("%p\n", memchr(s1, '\0', 25));
	printf("%p", ft_memchr(s1, '\0', 10));
			return (0);
			}*/
