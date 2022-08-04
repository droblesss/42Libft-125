/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:52:13 by drobles           #+#    #+#             */
/*   Updated: 2022/08/03 12:41:50 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nodo;

	nodo = (t_list *) malloc(sizeof(t_list));
	if (nodo != NULL)
	{
		nodo->content = (void *)content;
		nodo->next = NULL;
	}
	return (nodo);
}
