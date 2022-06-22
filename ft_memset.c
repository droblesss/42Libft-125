/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 13:43:06 by drobles           #+#    #+#             */
/*   Updated: 2022/06/20 17:47:23 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*src;

	src = b;
	i = 0;
	while (i < len)
	{
		src[i] = c;
		i++;
	}
	return (b);
}
/*int main(void)
{
	char s1[] = "Abcde";
	printf("%s", ft_memset(s1, '2' , 2));
	return (0);
}*/
