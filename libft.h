/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:17:54 by drobles           #+#    #+#             */
/*   Updated: 2022/06/29 16:51:55 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int		ft_isalpha(int src);
void	ft_bzero(void	*s, size_t	n);
int		ft_isascii(int c);
int		ft_isdigit(int src);
int		ft_isalnum(char str);
int		ft_isprint(int c);
void	*ft_memset(void	*b, int c, size_t len);
int		ft_strlen(const char	*str);
void	*ft_memcpy(void	*dst, const void	*src, size_t	n);
size_t	ft_strlcpy(char	*dst, const char	*src, size_t	dstsize);
size_t	ft_strlcat(char	*dest, const char	*src, size_t	dstsize);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_strchr(const char	*s, int c);
char	*ft_strrchr(const char	*s, int c);
int		ft_strncmp(const char	*s1, const char	*s2, size_t n);
void	*ft_memchr(const void	*s, int c, size_t n);
int		ft_memcmp(const void	*s1, const void	*s2, size_t	n);
char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len);
int		ft_atoi(const char	*str);
void	*ft_memmove(void	*dst, const void	*src, size_t len);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char	*s1);

#endif
