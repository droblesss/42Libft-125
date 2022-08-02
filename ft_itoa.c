/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 10:59:13 by drobles           #+#    #+#             */
/*   Updated: 2022/07/05 13:56:58 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*string;
	int		i;
	int		aux;

	aux = n;
	i = 0;
	while (aux > 0)
	{
		aux /= 10;
		i++;
	}
	string = ft_calloc((sizeof(char) * i + 1), 1);
	while (n > 0)
	{
		string[i - 1] = (n % 10) + 48;
		n /= 10;
		i--;
	}
	return (string);
}

/*int main(void):wq
 *
{
    printf("%s", ft_itoa(-4565456));
    return 0;
}*/	
