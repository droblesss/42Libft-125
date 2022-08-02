/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <drobles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:00:25 by drobles           #+#    #+#             */
/*   Updated: 2022/08/02 15:42:55 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *aux;
    t_list  *save;
    
    if (lst != NULL)
    {
        aux = *lst;
        while (aux != NULL)
        {
            save = aux->next;
            del(aux->content);
            free(aux);
            aux = save;     
        }
        *lst = NULL;    
    }
}