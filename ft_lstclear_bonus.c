/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slegaris <slegaris@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 15:12:16 by slegaris          #+#    #+#             */
/*   Updated: 2023/03/30 16:48:44 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *nodo;

	while ((*lst) != NULL)
	{
		nodo = (*lst)->next;
		del((*lst)->content);
		free((*lst));
		(*lst) = nodo;
	}
	*lst = NULL;
}
