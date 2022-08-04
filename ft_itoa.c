/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <drobles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 10:59:13 by drobles           #+#    #+#             */
/*   Updated: 2022/08/04 16:00:26 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	longitud(long aux)
{
	int		i;

	i = 1;
	if (aux < 0)
	{
		aux = aux * -1;
		i++;
	}
	while (aux > 9)
	{
		aux /= 10;
		i++;
	}
	return (i);
}

void	*mayorque(char *string, size_t n_long, int i)
{
	while (n_long > 0)
	{
		string[i] = 48 + (n_long % 10);
		n_long /= 10;
		i--;
	}
	return (string);
}

char	*ft_itoa(int n)
{
	char		*string;
	long		i;
	long long	n_long;

	n_long = (long long)n;
	i = longitud(n_long);
	string = (char *) malloc(sizeof(char) * (i + 1));
	if (!string)
		return (NULL);
	string[i--] = '\0';
	if (n_long == 0)
	{
		string[0] = 48;
		return (string);
	}
	if (n_long < 0)
	{
		string[0] = '-';
		n_long = n_long * -1;
	}
	string = mayorque(string, n_long, i);
	return (string);
}
/*int main(void)
{
	char *s = ft_itoa(0);
    printf("%s", s);
    return 0;
}*/
