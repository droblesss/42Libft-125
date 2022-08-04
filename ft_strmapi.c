/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:15:58 by drobles           #+#    #+#             */
/*   Updated: 2022/08/03 13:01:01 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{	
	char	*final;
	size_t	i;

	if (!s)
		return (NULL);
	final = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (final == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		final[i] = (*f)(i, s[i]);
		i++;
	}
	final[i] = '\0';
	return (final);
}
/*int main (void)
{
	printf("%s", ft_strmapi("hola", 
*/
