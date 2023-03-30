/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slegaris <slegaris@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 16:54:47 by slegaris          #+#    #+#             */
/*   Updated: 2023/03/30 17:15:40 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *contenido;
	t_list *nodo;
	t_list **nueva;

	nueva = NULL;
	while (lst != NULL)
	{
		contenido = f(lst->content);
		nodo = ft_lstnew(contenido);
		if (!nodo)
			return (del(contenido), NULL);
		lst = lst->next;
		ft_lstadd_back(nueva, nodo);
	}
	return ((*nueva));
}
