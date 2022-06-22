/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:32:13 by drobles           #+#    #+#             */
/*   Updated: 2022/06/22 13:53:37 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while ((s1[i] || s2[i]) && (n))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
		j++;
		n--;
	}
	return (0);
}
int	main(void)
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
}
