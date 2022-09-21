/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:41:19 by drobles           #+#    #+#             */
/*   Updated: 2022/07/22 17:29:29 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*s1)
{
	char	*aux;
	size_t	i;

	i = 0;
	aux = ft_calloc (sizeof(char) * ft_strlen(s1) + 1, 1);
	if (aux == NULL)
		return (NULL);
	while (s1[i])
	{
		aux[i] = s1[i];
		i++;
	}
	return (aux);
}
/*int main(void)
{
	printf("%s", ft_strdup("lorem ipsum dolor sit amet"));
	return (0);
	}*/
