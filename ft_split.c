/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <drobles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:09:11 by drobles           #+#    #+#             */
/*   Updated: 2022/08/09 11:06:50 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countword(char const *s, char c)
{
	unsigned int	i;
	int				words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			words++;
		while (s[i] != c && s[i])
			i++;
	}
	return (words);
}

static int	wordlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static char	**freeall(char **matriz, int j)
{
	while (j >= 0)
	{
		free(matriz[j]);
	}
	free(matriz);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**nueva;
	int		j;
	int		palabras;
	int		i;

	if (!s)
		return (NULL);
	palabras = ft_countword(s, c);
	nueva = (char **)malloc(sizeof(char *) * (palabras + 1));
	if (!nueva)
		return (NULL);
	nueva[palabras] = NULL;
	j = 0;
	i = 0;
	while (j < palabras)
	{
		while (s[i] == c)
			i++;
		nueva[j] = ft_substr(s, i, wordlen(s + i, c));
		if (!nueva[j])
			return (freeall(nueva, j));
		i = i + wordlen(s + i, c);
		j++;
	}
	return (nueva);
}
/*int main(void)
{
	char const *s= "holahielohormiga";
	char c = 'h';
	printf("%s", *ft_split(s, c));
	return (0);
}*/
