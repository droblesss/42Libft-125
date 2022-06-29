/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 11:20:05 by drobles           #+#    #+#             */
/*   Updated: 2022/06/29 15:55:53 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*aux;

	aux = (unsigned char *) s;
	i = 0;
	while ((aux[i] != '\0') && (n))
	{
		if (aux[i] == (unsigned char)c)
			return ((void *)&aux[i]);
		i++;
		n--;
	}
	return (NULL);
}
/*int main(void)
{
	printf("%s", memchr("holaquetal", 'q', 10));
	printf("%s", ft_memchr("holaquetal", 'q', 10));
			return (0);
			}*/
