/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <drobles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:02:08 by drobles           #+#    #+#             */
/*   Updated: 2022/08/02 16:12:06 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list  *save;

    while (lst != NULL)
    {
        save = lst->next;
        f(lst->content);
        lst = save;
    }
}
/*int main(void)
{
    printf(%s, ft_lstiter(hola, ft_toupper(hola)));
    return (0);
}*/