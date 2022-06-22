/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:32:13 by drobles           #+#    #+#             */
/*   Updated: 2022/06/22 16:43:10 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	unsigned char	*aux1;
	unsigned char	*aux2;

	aux1 = (unsigned char *)s1;
	aux2 = (unsigned char *)s2;
	i = 0;
	while ((aux1[i] || aux2[i]) && (i < n))
    {
        if (aux1[i] != aux2[i])
			return (aux1[i] - aux2[i]);
		i++;
    }
	return (0);
}
/*int    main(void)
{
    char s1[] = "test\200";
    char s2[] = "test\0";
    int r;
    r = 6;
    int imp;
    imp = ft_strncmp(s1, s2, r);
    printf("%d\n", imp);
    printf("%i", strncmp(s1, s2, r));
    return(0);
}*/
